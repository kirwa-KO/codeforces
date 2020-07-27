from sys import stdin, stdout
 
limak, bob = map(int, stdin.readline().split())
year = 0
while limak <= bob:
	year += 1
	limak *= 3
	bob *= 2
stdout.write(str(year) + "\n")
 