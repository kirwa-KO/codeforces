from sys import stdin, stdout

n = int(stdin.readline())

if n % 2 == 1:
    stdout.write('-')
    n += 1
stdout.write(str(n // 2) + '\n')
