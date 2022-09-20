numberOfstudent=int(input())
temp=numberOfstudent
grades=[]
while(numberOfstudent>0):
    grade=int(input())
    grades.append(grade)
    numberOfstudent-=1
i=0
while i < temp:
    curr=int(grades[i]/5)
    next=curr+1
    curvedMark=next*5
    if(grades[i]<38):
        grades[i]=grades[i];
    elif(curvedMark-grades[i]<3):
        grades[i]=curvedMark
    print(grades[i])
    i+=1