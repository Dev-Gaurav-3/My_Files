
    vector<int>nums = {1,3,2,4,3,5};

    int n = nums.size();
    if(n<4) return false;
    int i = 1;
    while(i<n && nums[i]>nums[i-1]) i++;
    if(i == n) return false;

    int p = i;
    while(i<n && nums[i]<nums[i-1]) i++;
    if(i == p || i == n) return false;

    int q = i;
    while(i<n && nums[i]>nums[i-1]) i++;
    
    return i == n;