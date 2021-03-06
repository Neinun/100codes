class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 1;
        int n = nums.size();
        int end = n-2;
        int mid;
        if(n==1)
            return 0;
        if(n==2)
        {
            if(nums[0]>nums[1])
                return 0;
            else
                return 1;
        }
        while(start<=end)
        {
            mid = start+ (end-start)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]<nums[mid+1])
                start = mid+1;
            else if(nums[mid]<nums[mid-1])
                end = mid-1;
        }
        if(nums[0]>nums[1])
            return 0;
        if(nums[n-1]>nums[n-2])
            return n-1;
        
    return -1;
    }
};
