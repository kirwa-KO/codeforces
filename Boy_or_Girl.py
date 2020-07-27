from sys import stdin, stdout
name_len = len(set(input()))
if name_len % 2 == 0:
	stdout.write("CHAT WITH HER!\n")
else:
	stdout.write("IGNORE HIM!\n")