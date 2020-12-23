from sys import stdin, stdout

out = ""

while True:
	first = stdin.readline()
	second = stdin.readline()
	if first != "" and second != "":
		first = int(first)
		second = int(second)
		out += str(first * second) + '\n'
	else:
		break

stdout.write(out)