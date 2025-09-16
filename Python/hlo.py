nums = [0,1,2,2,3,0,4,2]
val = 2
a  = len(nums)
for i in range(0,a-1):
    if(nums[i] == val):
        nums.remove(nums[i])
        a -= 1
        i -= 1
if(nums[len(nums)-1] == val):
    nums.remove(nums[len(nums)-1])

print(nums)