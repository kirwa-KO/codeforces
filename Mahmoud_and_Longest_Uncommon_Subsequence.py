a = input()
b = input()

if a == b:
	print("-1")
else:
	if len(a) >= len(b):
		print(len(a))
	else:
		print(len(b))