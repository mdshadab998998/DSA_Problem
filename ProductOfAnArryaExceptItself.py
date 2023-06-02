# num=[-1,1,0,-3,3]
# num=[1,2,3,4]
num=[0,4,0]
a=[]
prod=1
nozeroprod=1
sum=0
zero=0
# for i in range(len(num)):
#     for j in range(len(num)):
#         if(num[i]!=num[j]):
#             prod=prod*num[j]
#             print(prod)
#     a.append(prod)
#     prod=1
# print(a)

# --------------------------------
for i in num:
    if i==0:
        zero=zero+1
    if i!=0:
        sum=1
if sum==0 or zero>=2:
    for i in range(len(num)):
        a.append(0)
    print(a)
    exit()
for i in num:
    if i!=0:
        nozeroprod=nozeroprod*i
    prod=prod*i
    
for i in range(len(num)):
    if(num[i]!=0):
        a.append(prod//num[i])
    else:
        a.append(nozeroprod)
print(a)