nct = int(input())
 
cities = list(map(int, input().split()))
 
for i in range(nct):
	if cities == 0:
		left_min = left_max = abs(cities[i] - (cities[-1]))
	else:
		left_min = abs(cities[i] - (cities[i - 1]))
		left_max = abs(cities[i] - cities[0])
	if i == nct - 1:
		right_min = right_max = abs(cities[0] - cities[i])
	else:
		right_min = abs(cities[i + 1] - cities[i])
		right_max = abs(cities[-1] - cities[i])
 
	mn = min(left_min, right_min)
 
	mx = max(left_max, right_max)
 
 
	print(mn, mx)