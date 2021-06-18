class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int mid,first = -1,last = -1;
        if(n == 1 && nums[0] == target)
        {
            
            first = 0;
            last = 0;
            
        }
        else
        {
            while(start<=end)
            {
            mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                first = mid;
                end = mid -1;
            }
            else if(nums[mid]<target)
                start = mid +1;
            else 
                end = mid -1;
        }
        start = 0;
        end = n-1;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                last = mid;
                start = mid+ 1;
            }
            else if(nums[mid]<target)
                start = mid +1;
            else 
                end = mid -1;
            }
        }
        
        vector<int> result;
        result.push_back(first);
        result.push_back(last);
        return result;
        
    }
};
