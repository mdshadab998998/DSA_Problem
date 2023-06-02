# def checkPair(a,size,x):
#     for i in range(size):
#         for j in range(i+1,size):
#             if x==a[i]+a[j]:
#                 return 1
# print("enter the size of array")  
# n=int(input())
# a=[]
# print("enter the  array")
# for x in range(n):
#     value=int(input())
#     a.append(value)


# print("enter the key ")
# key=int(input())
# if(checkPair(a,len(a),key)):
#     print ("yes")
# else:
#     print('no')



# chat gpt 



















def checkPair(a, size, x):
    # Create an empty set to store elements
    elements = set()

    for i in range(size):
        # Calculate the required difference
        diff = x - a[i]

        # If the difference exists in the set, we found a pair
        if diff in elements:
            return 1

        # Add the current element to the set
        elements.add(a[i])

    return 0

print("Enter the size of the array:")
n = int(input())

a = []
print("Enter the array elements:")
for _ in range(n):
    value = int(input())
    a.append(value)

print("Enter the key:")
key = int(input())

if checkPair(a, len(a), key):
    print("Yes")
else:
    print("No")


