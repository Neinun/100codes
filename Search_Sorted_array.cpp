//Leetcode : https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int mid,prev,next;
        int result = 0;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            next = (mid + 1) % n;
            prev = (mid + n -1) % n;
            if(nums[mid] == target)
                return mid;
            if(nums[mid]<nums[prev] && nums[mid]<nums[next])
            {
                result = mid;
                break;
            }
            else if(nums[start]>nums[end]&&nums[mid]>nums[end])
                start = mid + 1;
             else if(nums[mid]<=nums[end])
                end = mid-1;
        }
        start = 0;
        end = result -1;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                end = mid-1;
            }
            else if(nums[mid]<target)
            {
                start = mid + 1;
            }
        }
        start = result;
        end = n-1;
        while(start<=end)
        {
            mid = start + (end-start)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                end = mid-1;
            }
            else if(nums[mid]<target)
            {
                start = mid + 1;
            }
        }
        return -1;
        
    }
};
