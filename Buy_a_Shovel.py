k, r = map(int, input().split())
 
number_of_shovel = 1
 
while (k * number_of_shovel) % 10 != 0 and \
	  (k * number_of_shovel) % 10 != r:
	number_of_shovel += 1
	
print(number_of_shovel)