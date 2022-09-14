
def unionofList(list1,list2):
    list1.extend(list2)
    unionList=set(list1)
    print(unionList)
def intersection(list1,list2):
    size1=len(list1)
    size2=len(list2)
    if(size1<size2):
        size1,size2=size2,size1
    for i in list1:
        if i not in m:
            m[i]=1
        else:
            m[i]+=1
    intersectionList=[]
    for i in list2:
        if i in m and m[i]:
            m[i]-=1
            intersectionList.append(i)
    print(intersectionList)

n=int(input("Enter the size of the first array:"))
list1=[]
print("Enter array elements: ")
while(n>0):
    number=int(input())
    list1.append(number)
    n-=1
m=int(input("Enter the size of the second array:"))
list2=[]
print("Enter array elements: ")
while(m>0):
    number=int(input())
    list2.append(number)
    m-=1
unionofList(list1,list2)
intersection(list1,list2)