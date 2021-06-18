class Solution {
public:
   
    bool search(vector<int>& nums, int target) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        if(n == 0)
            return false;
        if(n==1)
            return nums[0]==target;
        int result,mid,next,prev,diff_prev,diff_next;
        while(start<=end)
        {
            mid = (start + end)/2;
            if(nums[mid] == target)
                return true;
            next = (mid + 1) % n;
            prev = (mid + n -1)%n;
           if(nums[mid]<nums[prev] && nums[mid]<nums[next])
           {
               result = mid;
               break;
           }
            //else if(nums)
            else if(nums[start]<=nums[mid])
                start = start + 1;
             else if(nums[mid]<=nums[end])
                end = mid-1;
        }
        
        start = 0;
        end = result -1;
        while(start<=end)
        {
            mid = start + int((end-start)/2);
            if(nums[mid] == target)
                return true;
            else if(nums[mid]>target)
                end = mid-1;
            else if(nums[mid]<target)
                start = mid+1;
        }
        
        start = result;
        end = n-1;
        while(start<=end)
        {
            mid = start + ((end-start)/2);
            if(nums[mid] == target)
                return true;
            else if(nums[mid]>target)
                end = mid-1;
            else if(nums[mid]<target)
                start = mid+1;
        }
        return false;
    }
    
};
