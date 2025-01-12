from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        if(len(nums)<0 or len(nums)>10**4):
            return 0
        k=0
        for i in range(len(nums)):
            if(nums[i]!=val):
                nums[k]=nums[i]
                k+=1
        return k
    

if __name__=='__main__':
    nums=[]
    for i in range(101):
        try:
            num=int(input("Enter integer element in the list (press any random character to exit): "))
            nums.append(num)
        except ValueError:
            break
    val=int(input("Enter the value of the integer you want to remove: "))
    
    solution=Solution()
    k=solution.removeElement(nums=nums,val=val)
    print(f"The expected length of the list after removing the element is: {k}")