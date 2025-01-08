from typing import List

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        # nums1[m:]=[0]*(len(nums1)-m)
        nums1[m:]=nums2[:n]
        nums1.sort()
        print(nums1)

if __name__=="__main__":
    nums1=[]
    for i in range(500):
        try:
            nums1.append(int(input("Enter element in nums 1 (press a random character to exit): ")))
        except ValueError:
            print("Only Integer allowed!")
            break
    
    print(f"Nums1: {nums1}")
    
    nums2=[]
    for i in range(500):
        try:
            nums2.append(int(input("Enter element in nums 2 (press a random character to exit): ")))
        except ValueError:
            print("Only Integer allowed!")
            break
        
    print(f"Nums2: {nums2}")

    m=int(input("Enter the value of m: "))
    n=int(input("Enter the value of n: "))
    solve=Solution()
    
    solve.merge(m=m,n=n,nums1=nums1,nums2=nums2)