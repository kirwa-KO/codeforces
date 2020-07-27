from sys import stdin, stdout
 
string_one = stdin.readline().lower()
string_two = stdin.readline().lower()
 
if string_one == string_two:
	stdout.write("0\n")
elif string_one > string_two:
	stdout.write("1\n")
else:
	stdout.write("-1\n")