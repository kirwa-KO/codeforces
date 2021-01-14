import subprocess
from	termcolor import colored

proc = subprocess.Popen(['git', 'status', "--porcelain"], stdout=subprocess.PIPE)
output = proc.stdout.read()
output = str(output, 'utf-8').split('\n')

files_to_push = []
for single_out in output:
	temp = single_out.split(' ')
	if '??' in temp[0]:
		files_to_push.append(temp[1])

for file in files_to_push:
	cmd = "git add " + file
	try:
		subprocess.Popen(["git", "add", file], stdout=subprocess.PIPE)
		output = proc.stdout.read()
	except:
		print(colored("The File", "white"), end=" ")
		print(colored(f"[{file}]", "yellow"), end=" ")
		print(colored("Added", "white"), end=" ")
		print(colored("=> Failed", "green"))
	try:
		cmd = 'add solution of ' + file.replace('_', ' ').split('.')[0] + ' problem'
		subprocess.Popen(["git", "commit", "-m", cmd], stdout=subprocess.PIPE)
		output = proc.stdout.read()
	except:
		print(colored("The File", "white"), end=" ")
		print(colored(f"[{file}]", "yellow"), end=" ")
		print(colored("Commited", "white"), end=" ")
		print(colored("=> Failed", "green"))

	print(colored("The File", "white"), end=" ")
	print(colored(f"[{file}]", "yellow"), end=" ")
	print(colored("Added and Commited", "white"), end=" ")
	print(colored("=> SUCCESS", "green"))

