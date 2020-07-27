test, available_ice_cream = map(int, input().split())
distress = 0
for _ in range(test):
	child_or_carier = int(input().replace(' ', ''))
	if child_or_carier >= 0:
		available_ice_cream += child_or_carier
	else:
		if child_or_carier * -1 > available_ice_cream:
			distress += 1
		else:
			available_ice_cream += child_or_carier
print(f"{ available_ice_cream } { distress }")