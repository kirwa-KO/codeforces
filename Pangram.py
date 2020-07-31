from sys import stdin, stdout
from string import ascii_lowercase 

length = int(stdin.readline())
word = stdin.readline().lower()

for i in ascii_lowercase:
	if word.count(i) == 0:
		stdout.write("NO\n")
		exit()

stdout.write("YES\n")

