from sys import stdin, stdout

n, m = map(int, stdin.readline().split())

color = []

for i in range(n):
    row = list(stdin.readline().split())
    color.extend(row)

if 'C' in color or 'M' in color or 'Y' in color:
	stdout.write("#Color\n")
	exit()
stdout.write("#Black&White\n")
