nfr = int(input())
 
friend = list(map(int, input().split()))
 
gifts = {}
 
for i in range(nfr):
	gifts[friend[i]] = i + 1
 
for _, value in sorted(gifts.items()):
	print(value, end=" ")
print()