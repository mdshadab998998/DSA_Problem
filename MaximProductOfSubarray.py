# nums=[-3,-1,-1]
# nums=[-2,0,-1]
# nums = [2,3,-2,4]
nums=[-2,3,-4]


ma=nums[0]
mi=nums[0]
ans=nums[0]
for i in range(1,len(nums)):
    if(nums[i]<0):
        ma,mi=mi,ma
    ma=max(nums[i],ma*nums[i])
    mi=min(nums[i],mi*nums[i])
    ans=max(ans,ma)
        
    
print(ans)
    
    
    


    
