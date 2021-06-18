class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max = *max_element(nums.begin(), nums.end());
        if(max<0)
            return max;
        
        int max_here = 0;
        max = 0;
        
        for(int i = 0; i<nums.size(); i++)
        {
            max_here = max_here + nums[i];
            if(max_here<0)
            {
                max_here = 0;
            }
            if(max_here>max)
                max = max_here;
        }
        
        return max;
    }
};
