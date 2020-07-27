from sys import stdin, stdout
 
problems = int(stdin.readline())
solved = 0
for _ in range(problems):
	freinds = stdin.readline()
	if freinds.count('1') >= 2:
		solved += 1
stdout.write(str(solved) + "\n")