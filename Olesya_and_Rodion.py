from sys import stdin, stdout

n, t = map(int, stdin.readline().split())

if t != 10:
	stdout.write(str(t))
	for i in range(n - 1):
		stdout.write('0')
	stdout.write('\n')
else:
	if n == 1:
		stdout.write('-1\n')
	else:
		stdout.write(str(t))
		for i in range(n - 2):
				stdout.write('0')
		stdout.write('\n')
