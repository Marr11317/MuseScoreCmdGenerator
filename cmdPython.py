def itemsToEnum(items: set) -> str :
    text = ''
    for value in items :
        text += '      ' + value.replace('-', '_').upper() + ',\n'
    text = text[:-2] # remove last two characters (',\n')
    return text

def itemsToStrings(items: set) -> str :
    text = ''
    for value in items :
        text += ('            case Cmd::' + value.replace('-', '_').upper() 
             + ' ' * (30 - len(value.replace('-', '_'))) # align
             + ': return "' + value + '"'
             + ' ' * (30 - len(value.replace('-', '_'))) # align
             + '; break;\n')
    return text

originalfile = open("shortcut.cpp", "r")
items = {'dummy'}
items.remove('dummy') # apparently needed to create a set without confusion
while True :
    line = originalfile.readline()
    value = line.strip().replace(',', '').replace('"', '')

    if line == "/// END OF FILE\n" :
        break

    if (line.strip().startswith('"')    # check if it is a string
        and not ' ' in line.strip()     # check if it doesn't contain spaces
        and not value.replace('_', '') in items) :  # some values like RELAYOUT also come as RE_LAYOUT   
        items.add(value)
        #text += '      ' + value + '\n'


#print(items)

# Generate the enum in the .h
moldFile = open('mold.h', 'r')
outputHFile = open("cmdlist.h", "w+")
outFile = open("All.txt", 'w+')
outFile.write('\n'.join(items))

mold = moldFile.read()
output = mold.replace('//Replace', itemsToEnum(items)).replace('//AndReplace', itemsToStrings(items))
outputHFile.write(output)

moldFile.close()
outputHFile.close()

