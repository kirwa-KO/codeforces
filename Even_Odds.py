from sys import stdin, stdout
import math

n, k = map(int, stdin.readline().split())
if (k == math.ceil(n / 2)) and n % 2 == 1:
	print(n)
	exit()

if k <= n // 2:
	print(k * 2 - 1)
else:
	n_2 = math.ceil(n / 2)
	print((k - n_2) * 2)

