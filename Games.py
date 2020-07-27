wear_guest_in_home = 0
 
teams = int(input())
 
home_color = []
guest_color = []
 
for _ in range(teams):
	arr = list(map(int, input().split()))
	home_color.append(arr[0])
	guest_color.append(arr[1])
 
for i in guest_color:
	wear_guest_in_home += home_color.count(i)
print(wear_guest_in_home)