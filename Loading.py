from time import sleep

# To get the string from the user
loading_string = input().lower()
# change the string to a list to easy handle
# and change the characters to upper case and inverse
lst = list(loading_string)
# Add a simple decoration in the front of the list
lst.insert(0, "[*] ")
# Add a simple decoration in the back of the list
lst.append(" ... ")
lst.append("\\")
# counter to decide what we need to put is /, -, |, \
slash = 0
# counter to the list and decide what the charactere need to change
i = 0
while i < len(loading_string):
	lst[i + 1] = str(lst[i + 1]).upper()
	print(''.join(lst), end="\r")
	sleep(0.2)
	lst[i + 1] = str(lst[i + 1]).lower()
	if slash == 0:
		lst[-1] = "|"
	elif slash == 1:
		lst[-1] = "/"
	elif slash == 2:
		lst[-1] = "-"
	else:
		lst[-1] = "\\"
	slash = (slash + 1) % 3
	i = (i + 1) % len(loading_string)