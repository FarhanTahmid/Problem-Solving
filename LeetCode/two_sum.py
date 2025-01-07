from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        if(len(nums)<2 or len(nums)>10**4):
            return []
        for i in range(len(nums)):
            for j in range(len(nums)):
                if(i==j):
                    pass
                else:
                    if(nums[i]+nums[j]==target):
                        return [i,j]
                
    

if __name__=='__main__':
    print("Enter the numbers in the list: ")
    print("Enter any random alphabet to exit!")
    nums=[]
    for i in range(10**4):
        try:
            num=int(input())
            nums.append(num)
        except ValueError:
            break
    print("Now enter the Target: ")
    target=int(input())
    solution=Solution()
    two_sum_indices=solution.twoSum(nums=nums,target=target)
    print(f"The indexes are: {two_sum_indices}")