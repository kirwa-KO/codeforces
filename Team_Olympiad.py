test = int(input())
skills = list(map(int, input().split()))
 
programming_skill = skills.count(1)
math_skill = skills.count(2)
physics_skill = skills.count(3)
res = ""
teams = 0
 
if programming_skill == 0 or math_skill == 0 or physics_skill == 0:
	print('0')
	exit()
else:
	teams = min(programming_skill, math_skill, physics_skill)
	res += str(teams) + "\n"
 
student_of_programming = []
student_of_math = []
student_of_physics = []
 
for i in range(test):
	if skills[i] == 1:
		student_of_programming.append(i + 1)
	elif skills[i] == 2:
		student_of_math.append(i + 1)
	else:
		student_of_physics.append(i + 1)
 
student_of_programming = student_of_programming[len(student_of_programming) - teams:]
student_of_math = student_of_math[len(student_of_math) - teams:]
student_of_physics = student_of_physics[len(student_of_math) - teams:]
 
for i in range(teams):
	res +=	str(student_of_programming[i]) + ' '\
			+ str(student_of_math[i]) + ' '\
			+ str(student_of_physics[i]) + '\n'
 
print(res, end="")