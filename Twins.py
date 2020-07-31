from sys import stdin, stdout

nb_coins = int(stdin.readline())
coins = list(map(int, stdin.readline().split()))
coins.sort(reverse=True)
res = 0
half_of_sum_coins = sum(coins) // 2
me = 0
for i in coins:
	if me > half_of_sum_coins:
		break
	me += i
	res += 1

stdout.write(str(res) + "\n")

