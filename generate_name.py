from sys import argv
from os import  system

fileName = argv[1].replace(' ', '_').replace("'", "_") + '.cpp'

cppCodeHeader = '''// #include <bits/stdc++.h>
#include "stdc++.h"

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // your code here
}
'''

with open(fileName, 'w') as file:
    file.write(cppCodeHeader)

system("/Applications/Visual\ Studio\ Code.app/contents/Resources/app/bin/code " + fileName)