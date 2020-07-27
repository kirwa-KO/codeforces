n, t, k, d = map(int, input().split())
 
if n <= k:
	print("NO")
elif d < t:
	print("YES")
else:
	oven = d // t
	if n - k * oven > k:
		print("YES")
	else:
		print("NO")