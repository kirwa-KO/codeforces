arr = list(input().split())
arr[0] = arr[0][1:]
arr[-1] = arr[-1].replace('}', ',')
chara = set(arr)
length = 0
if list(chara)[0] == ',':
	print('0')
else:
	print(len(chara))