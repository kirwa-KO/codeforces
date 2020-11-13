from sys import stdin, stdout
from math import sqrt

def is_prime(number):
	i = 2
	square_root_of_number = sqrt(number)
	while i <= square_root_of_number:
		if number % i == 0:
			return False
		i += 1
	return True

n, m = map(int, stdin.readline().split())

if is_prime(m) == False:
	stdout.write("NO\n")
	exit()

while True:
	n += 1
	if is_prime(n) == True:
		break

if n != m:
	stdout.write("NO\n")
	exit()
stdout.write("YES\n")
