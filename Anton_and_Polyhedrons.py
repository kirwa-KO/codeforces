from sys import stdin, stdout

n = int(stdin.readline())

shapes = {
	'Tetrahedron': 4,
	'Cube': 6,
	'Octahedron': 8,
	'Dodecahedron': 12,
	'Icosahedron': 20
}

res = 0

for i in range(n):
    res += shapes[stdin.readline().replace('\n', '')]

stdout.write(str(res) + '\n')