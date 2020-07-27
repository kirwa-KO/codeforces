from string import ascii_lowercase
from random import randint
 
n, k = map(int, input().split())
password = ""
start = 0
for _ in range(n):
	if start >= k:
		start = 0
	# print(f"start => {start}")
	password += ascii_lowercase[start]
	start += 1
 
print(password)