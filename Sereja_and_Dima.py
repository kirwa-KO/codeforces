from sys import stdin, stdout
number_of_cards = int(stdin.readline())
cards = list(map(int, stdin.readline().split()))
first = 0
Sereja = 0
Dima = 0
last = number_of_cards - 1
i = 0
while i < number_of_cards:
	if i % 2 == 0:
		# print("sejera")
		if cards[first] > cards[last]:
			Sereja += cards[first]
			first += 1
		else:
			Sereja += cards[last]
			last  -= 1
	else:
		# print("dima")
		if cards[first] > cards[last]:
			Dima += cards[first]
			first += 1
		else:
			Dima += cards[last]
			last  -= 1
	i += 1
	
 
stdout.write(str(Sereja) + " " + str(Dima) + "\n")