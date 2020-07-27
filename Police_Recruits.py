from sys import stdin, stdout
number_of_policies = int(stdin.readline())
policies = list(map(int, stdin.readline().split()))
i = 0
police_on_service = 0
untreated = 0
while i < number_of_policies:
	if policies[i] != -1:
		police_on_service += policies[i]
	else:
		if police_on_service == 0:
			untreated += 1
		else:
			police_on_service -= 1
	i += 1
stdout.write(str(untreated) + '\n')
 