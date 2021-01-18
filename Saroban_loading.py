from time			import sleep
from termcolor		import colored

number = "56789987650123443210"

while True:
	for digit in number[::-1]:
		out = ""
		digit = int(digit)
		if digit < 5:
			out += "O-|"
		else:
			out += "-O|"
			digit -= 5
		
		out += 'O' * digit + '-' + 'O' * (4 - digit)
		sleep(0.2)
		print(colored(out.split('|')[0], 'white') + colored("|", 'yellow') + colored(out.split('|')[1], 'white') + colored(" Saroban Loading....!", 'yellow'), end='\r')
