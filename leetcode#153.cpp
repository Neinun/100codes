class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        int end = n - 1;
        int mid,prev,next;
        while(start <= end)
        {
            mid = start  + (end-start)/2;
            next = (mid + 1) % n;
            prev = (mid + n - 1) % n;
            if(nums[mid]<nums[next] && nums[mid]<nums[prev])
                return nums[mid];
            else if(nums[start]>nums[end]&&nums[mid]>nums[end])
                start = mid + 1;
             else if(nums[mid]<=nums[end])
                end = mid-1;
        }
        return nums[mid];
    }
};
