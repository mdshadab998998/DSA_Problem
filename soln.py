def saveThePrisoner(n, m, s):
    r = (m % n) + s - 1 
    if ( r > n):
         r -= n
    if ( r == 0):
         return n
    return r

l=int(input())
for p in range(0,l):
     n=int(input())
     m=int(input())
     s=int(input())
     f=saveThePrisoner(n,m,s)
     print(f)

     
     