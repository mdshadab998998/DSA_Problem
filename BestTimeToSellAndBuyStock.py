def maxprofit(arr):
    n=len(arr)
    chepest=arr[0]
    maxprof=0
    for x in range(n):
        if arr[x]<chepest:
            chepest= arr[x]
        if maxprof<arr[x]-chepest:
            maxprof=arr[x]-chepest
    return maxprof


ar=[7,6,4,3,1]
print(maxprofit(ar))