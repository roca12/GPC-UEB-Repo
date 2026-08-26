class Solution(object):
    def twoSum(self, nums, target):
        visto = {}

        for i, num in enumerate(nums):
            complemento = target - num
            if complemento in visto:
                return [visto[complemento], i]
            visto[num] = i
        return[]
    
#Resuelto en LeetCode
