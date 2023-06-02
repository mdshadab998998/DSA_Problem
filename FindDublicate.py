a=[3,3,3,3,3]
# el=set()
# for i in range(len(a)):
#     if(a[i] not in el):
#         el.add(a[i])
#     else:
#         print(a[i])
#         break
max=0
min=len(a)
for i in range(len(a)):
    if a[i]>max:
        max=a[i]
    if a[i]<min:
        min=a[i]
print(max,min)
ans1=min
ans2=a[0]
for i in range(min+1,max+1):
    ans1=ans1^i
for i in range(1,len(a)):
    ans2=ans2^a[i]
print(ans1^ans2)


