from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        nums.sort()
        if(len(nums)<0 or len(nums)>3*10**4):
            return 0
        k=0
        for i in range(1,len(nums)):
            if(nums[i]!=nums[k]):
                k+=1
                nums[k]=nums[i]
        return k+1

if __name__=='__main__':
    nums=[]
    for i in range(3*10**4):
        try:
            num=int(input("Enter integer element in the list (press any random character to exit): "))
            nums.append(num)
        except ValueError:
            break
    
    solution=Solution()
    k=solution.removeDuplicates(nums=nums)
    print(f"The expected length of the list after removing duplicate elements is: {k}")