from sys import stdin, stdout

keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./"
shifting = input()

if shifting == 'R':
	move = -1
else:
	move = 1

message = input()
for i in message:
	index = keyboard.index(i)
	print(keyboard[index + move], end="")
print()
