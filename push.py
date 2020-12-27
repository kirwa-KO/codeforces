import subprocess

files = [
"Coder.cpp",
"Combination_Lock.cpp",
"GukiZ_and_Contest.cpp",
"Levko_and_Table.cpp",
"Roma_and_Lucky_Numbers.cpp",
"Soft_Drinking.cpp",
"Summer_Camp.cpp",
"Toy_Army.cpp",
"Wizards__Duel.cpp",
]

for file in files:
	cmd = "git add " + file
	subprocess.call(["git", "add", file])
	cmd = 'add solution of ' + file.replace('_', ' ').split('.')[0] + ' problem'
	subprocess.call(["git", "commit", "-m", cmd])
