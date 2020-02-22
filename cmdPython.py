originalfile = open("shortcut.cpp", "r")
text = ""
while True :
    line = originalfile.readline()
    if line.strip().startswith('"') and not ' ' in line.strip() and not line.strip().replace('",', '').replace('"', '').upper() in text: 
        text += '      ' + line.strip().replace('",', '').replace('"', '').upper() + ',\n'

    if line == "/// END OF FILE\n" :
        break

#print(text)
moldFile = open('mold.h', 'r')
outputFile = open("cmdlist.h", "w+")

mold = moldFile.read()
outputFile.write(mold.replace('\\Replace', text))
