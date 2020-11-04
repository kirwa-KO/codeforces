from sys import stdin, stdout
from math import ceil

n, m, a = map(int, stdin.readline().split())

stdout.write(str(ceil(n / a) * ceil(m / a)) + '\n')