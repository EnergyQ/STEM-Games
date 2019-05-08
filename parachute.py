inp = raw_input()
r,m = map(float, inp.split())
m = int(m)
islands = []
for i in range(m):
    islands.append(input())
mass = 0
for i in islands:
    mass += i*i*3.14159265
print(round(1-mass/(r*r*3.14159265),2))