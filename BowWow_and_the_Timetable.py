from sys import stdin, stdout
# from math import sqrt

s = stdin.readline()

decimal_s = int(s, 2)
# print(decimal_s)
count = 0
res = 1

while res < decimal_s :
	count += 1
	res *= 4

stdout.write(str(count) + '\n')