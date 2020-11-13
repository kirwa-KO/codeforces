from sys import argv
from os import  system

fileName = argv[1].replace(' ', '_').replace("'", "_") + '.cpp'
system("/Applications/Visual\ Studio\ Code.app/contents/Resources/app/bin/code " + fileName)