class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start,end,mid;
        int n = nums.size();
        start = 0;
        end = n-1;
        while(start<=end)
        {
            mid = start + ((end-start)/2);
            if(nums[mid] == target)
                return mid;
            else if(nums[mid]<target)
            {
                start = mid+1;
            }
                
            else if(nums[mid]>target)
            {
                end = mid-1;
            }
                
        }
        return start;
        
    }
};
