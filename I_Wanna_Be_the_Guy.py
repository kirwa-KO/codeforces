from sys import stdin, stdout

all_levels = int(input())

x_can_pass = stdin.readline().split()
x_can_pass = x_can_pass[1::]

y_can_pass = stdin.readline().split()
y_can_pass = y_can_pass[1::]

levels_set = set(x_can_pass + y_can_pass)

# levels_set.remove(0)

lst = list(levels_set)

lst = [i for i in lst if i != '0']

# print(lst)

if all_levels == len(lst):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")