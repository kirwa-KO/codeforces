from sys import stdin, stdout

number_of_participant = int(stdin.readline())

rating = []

for i in range(number_of_participant):
	x, y = map(int, stdin.readline().split())
	if x != y:
		stdout.write("rated\n")
		exit()
	rating.append(x)

rating_sorted = rating.copy()
rating_sorted.sort(reverse=True)

if rating_sorted == rating:
    stdout.write("maybe\n")
    exit()

stdout.write("unrated\n")
