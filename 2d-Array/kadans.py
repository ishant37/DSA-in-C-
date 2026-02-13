def kadans(nums):
    if not nums:
        return 0
    else:
        max_sum = current_sum = min_sum = nums[0]
        for num in nums[1:]:
            current_sum = max(num, current_sum + num)
            max_sum = max(max_sum, current_sum)
            min_sum = min(min_sum, current_sum)
            return max_sum
        
kadans(3)