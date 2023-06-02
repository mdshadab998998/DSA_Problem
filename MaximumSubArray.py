# nums=[-2,1,-3,4,-1,2,1,-5,4]
# sum=0
# for i in range(len(nums)):
#     for j in range(i,len(nums)):
#         maxsum=0
#         for k in range(i,j+1):
#             maxsum=maxsum+nums[k]
#         if maxsum>sum:
#             sum=maxsum
# print(sum)



# ===========================================================
nums=[-2,1,-3,4,-1,2,1,-5,4]
maxsum=nums[0]
sum=0
for i in range(len(nums)):
    sum=sum+nums[i]
    if(sum>maxsum):
        maxsum=sum
    if(sum<0):
        sum=0
print(maxsum)
    








# nums=[5,4,-1,7,8]
# sum=0
# for i in range(len(nums)):
#     maxsum=0
#     for j in range(i,len(nums)):
#         maxsum=maxsum+nums[j]
#         if maxsum>sum:
#             sum=maxsum
# print(sum)
        
