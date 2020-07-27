name = input()
current_position = 0
rotation = 0
for i in name:
	index = ord(i) - 97
	walk = abs(current_position - index)
	if walk > 13:
		rotation += 26 - walk
	else:
		rotation += walk
	current_position = index
print(rotation)