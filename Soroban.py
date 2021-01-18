number = input()

out = ""

def one_digit(digit):
	global out
	if digit < 5:
		out += "O-|"
	else:
		out += "-O|"
		digit -= 5

	out += 'O' * digit + '-' + 'O' * (4 - digit) + '\n'

for digit in number[::-1]:
	one_digit(int(digit))

print(out, end="")
