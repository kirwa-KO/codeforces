from sys import stdin, stdout

n = int(stdin.readline())

letters = stdin.readline()
char_in_diagonal = letters[0]
char_not_in_diagonal = letters[1]

start = 0
end = n - 1

def compareLetters(string, start, end):
	if string[start] != char_in_diagonal or string[end] != char_in_diagonal:
		stdout.write('NO\n')
		exit()
	for j in range(n):
		if j == start or j == end:
			continue
		if string[j] != char_not_in_diagonal:
			stdout.write('NO\n')
			exit()


if char_in_diagonal == char_not_in_diagonal:
	stdout.write('NO\n')
	exit()


compareLetters(letters, int(start), int(end))

for i in range(n - 1):
	start += 1
	end -= 1
	letters = stdin.readline()
	compareLetters(letters, start, end)


stdout.write('YES\n')
