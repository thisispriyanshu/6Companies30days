int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int min_len=INT_MAX;
        int sum=0;
         for(int i=0;i<nums.size();i++)
             sum+=nums[i];
        if(sum<target)
            return 0;
        sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target)
                return 1;
            sum+=nums[i];
            while(sum>=target){
                min_len=min(min_len,i-left+1);
                sum-=nums[left++];
            }
        }
        return min_len;
    }
