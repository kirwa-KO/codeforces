from sys import stdin, stdout
song_with_WUB = stdin.readline()

stdout.write(song_with_WUB.replace("WUB", " ").strip() + '\n')