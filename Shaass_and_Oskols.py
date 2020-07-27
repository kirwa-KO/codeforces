n = int(input())
wires = list(map(int, input().split()))
for _ in range(int(input())):
	x, y = map(int, input().split())
	left = y - 1
	right = wires[x - 1] - y
	wires[x - 1] = 0
	if x - 2 >= 0:
		wires[x - 2] += left
	if len(wires) > x:
		wires[x] += right
 
for i in wires:
	print(i)