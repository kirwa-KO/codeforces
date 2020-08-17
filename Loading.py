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
	# change the charactere to uppercase and we add 1 because we add this decoration [*] in front of list
	lst[i + 1] = str(lst[i + 1]).upper()
	# print the current string and \r to replace the old with the new
	print(''.join(lst), end="\r")
	# sleep to make a delay
	sleep(0.2)
	# return the charactere to the origin value
	lst[i + 1] = str(lst[i + 1]).lower()
	# decide what we need to choose and and follow logical order
	if slash == 0:
		lst[-1] = "|"
	elif slash == 1:
		lst[-1] = "/"
	elif slash == 2:
		lst[-1] = "-"
	else:
		lst[-1] = "\\"
	slash = (slash + 1) % 3
	# incerement the variable and we make % to make and infinite loop
	i = (i + 1) % len(loading_string)