class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        streak = 0
        current_val = nums[0]

        nums.sort()

        for i in nums :
            if i == current_val :
                streak += 1
            else :
                if (streak > (len(nums) / 2)) :
                    break
                else :
                    streak = 1
                    current_val = i

        return current_val
