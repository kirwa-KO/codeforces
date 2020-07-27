from sys import stdin, stdout
 
column = int(stdin.readline())
cubes = list(map(int, stdin.readline().split()))
cubes.sort()
i = 0
while i < column - 1:
	print(cubes[i], end=" ")
	i += 1
print(cubes[i])
 