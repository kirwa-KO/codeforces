from sys import stdin, stdout
number_of_stones = int(stdin.readline())
stones = stdin.readline()
prev = stones[0]
res = 0
i = 1
while i < number_of_stones:
	if prev == stones[i]:
		res += 1
	prev = stones[i]
	i += 1
print(res)