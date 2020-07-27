from sys import stdin, stdout
 
 
def distance_to_5(x):
	if x <= 3:
		return 3 - x
	return x - 3
 
i = 1
movement = 0
while i <= 5:
	row = stdin.readline().split()
	if row.count('1'):
		x = row.index('1') + 1
		y = i
		break
	i += 1
 
stdout.write(str(distance_to_5(x) + distance_to_5(y)) + "\n")