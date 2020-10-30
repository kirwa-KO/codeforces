from sys import stdin, stdout

n = int(stdin.readline())

teams = []

teams_dict = {}

for i in range(n):
	team_name = stdin.readline().split('\n')[0]
	teams.append(team_name)
	if team_name in teams_dict.keys():
		teams_dict[team_name] += 1
	else:
		teams_dict[team_name] = 1

max_team = max(teams_dict, key=teams_dict.get)
stdout.write(max_team + "\n")