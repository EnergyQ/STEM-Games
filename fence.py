n = int(raw_input())

points = []
for i in range(n+1):
    inp = raw_input()
    x,y = map(int, inp.split())
    points.append((x,y))

ukupno=0
for i in range(n):
    x1,y1 = points[i]
    x2,y2 = points[(i+1)%n]
    x3,y3 = points[(i+2)%n]
    A = x1*y2-x2*y1+x2*y3-x3*y2+x3*y1-x1*y3
    if A > 0:
        ukupno+=1
print(ukupno)