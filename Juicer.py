n, b, d = map(int, input().split())
oranges = list(map(int, input().split()))
i = 0
waste = 0
emptied = 0
while i < n:
	if oranges[i] <= b:
		waste += oranges[i]
	if waste > d:
		emptied += 1
		waste = 0
	i += 1
print(emptied)