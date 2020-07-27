from sys import stdin, stdout
group = 1
magnets = int(stdin.readline())
last_chr = stdin.readline()[-2]
i = 1
while i < magnets:
	i += 1
	domino = stdin.readline()
	first_chr = domino[0]
	if last_chr == first_chr:
		group += 1
	last_chr = domino[-2]
stdout.write(str(group) + '\n')
 