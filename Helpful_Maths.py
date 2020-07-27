numbers = list(map(int, input().split('+')))
numbers.sort()
for i in range(len(numbers) - 1):
	print(numbers[i], end="+")
print(numbers[-1])