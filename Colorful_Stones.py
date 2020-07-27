s = input()
t = input()

position = 0

for i in range(len(t)):
	if t[i] == s[position]:
		position += 1
print(position + 1)