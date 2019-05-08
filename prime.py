m = input()
m+=1
while True:
    i = 2
    prim = True
    while(i*i <= m):
        if(m%i==0):
            prim = False
            break
        i+=1
    if prim == False:
        m+=1
    else:
        break
p1 = 2
p2 = 1
number = 1
i=0
while i < m-1:
    t = p1 + p2
    p1 = p2
    p2 = t
    if p1 > 1000000000:
        p1 -= 1000000000
        p2 -= 1000000000
    i+=1
print(p2)
