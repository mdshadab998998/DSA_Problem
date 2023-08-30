nums=[3,1,2]
st=0
en=len(nums)-1
minn=nums[0]
while(st<en):
    m=(st+en)//2
    print(nums[en])
    if(nums[st]<nums[en]):
        minn=min(minn,nums[st])
        break
    minn=min(minn,nums[m])
    if(nums[m]>=nums[st]):
        st=m+1
    else:
        en=en+1
print(minn)



    

