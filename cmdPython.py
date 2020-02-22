originalfile = open("shortcut.cpp", "r")
text = ""
while True :
    line = originalfile.readline()
    value = line.strip().replace(',', '').replace('"', '').replace('-', '_').upper()

    if line == "/// END OF FILE\n" :
        break

    if (line.strip().startswith('"')    # check if it is a string
        and not ' ' in line.strip()     # check if it doesn't contain spaces
        and not value in text           # be sure it's not there twice
        and not value.replace('_', '') in text) :  # some values like RELAYOUT also come as RE_LAYOUT   

        text += '      ' + value + '\n'


#print(text)

# Generate the enum in the .h
moldHFile = open('mold.h', 'r')
outputHFile = open("cmdlist.h", "w+")

mold = moldHFile.read()
outputHFile.write(mold.replace('//Replace', text))

moldHFile.close()
outputHFile.close()

# Generate the mapping to a String in the .cpp
moldCppFile = open('mold.cpp', 'r')
outputCppFile = open('cmdlist.cpp', 'w+')
moldCpp = moldCppFile.read()

moldCppFile.close()
outputCppFile.close()
