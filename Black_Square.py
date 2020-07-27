from sys import stdin, stdout
strips = list(map(int, stdin.readline().split()))
steps = input()
calorie = 0
for i in steps:
	calorie += strips[int(i) - 1]
stdout.write(str(calorie) + '\n')