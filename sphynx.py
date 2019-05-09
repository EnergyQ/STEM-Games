x0,x1,x2 = raw_input().split(' ')
m = raw_input()
m=int(m)
x0=int(x0)
x1=int(x1)
x2=int(x2)
total = 0
for i in range(m):
    a,b,c,n = raw_input().split(' ')
    a=int(a)
    b=int(b)
    c=int(c)
    n=int(n)
    newx0 = x0
    newx1 = x1
    newx2 = x2
    if n == 0:
        total += x0
    elif n == 1:
        total += x1
    elif n == 2:
        total += x2
    else:
        for j in range(n-2):
            x3 = a*newx2+b*newx1+c*newx0
            newx0=newx1
            newx1=newx2
            newx2=x3
        total += newx2
print(total%1000000009)
