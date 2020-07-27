test = int(input())
 
for _ in range(test):
	string = input()
	if len(string) > 10:
		print(f"{string[0]}{len(string) - 2}{string[-1]}")
	else:
		print(string)