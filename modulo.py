from itertools import permutations 

a = input()
b = str(a)
c = []

for digit in b:
    c.append (int(digit))


l = list(permutations(c)) 
maks = -1
for tupl in l:
    num = 0
    for dig in tupl:
        num = num*10 + dig
    if num%8==5 and num > maks and num != a:
        maks = num
print(maks)