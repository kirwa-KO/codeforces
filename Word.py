from sys import stdin, stdout
word = stdin.readline()
 
upper = sum(1 for i in word if i.isupper())
lower = sum(1 for i in word if i.islower())
 
if lower >= upper:
	stdout.write(word.lower() + "\n")
else:
	stdout.write(word.upper() + "\n")