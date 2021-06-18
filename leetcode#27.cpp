class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int flag = 0;
        int idx = 0;
        
     
            while(idx<nums.size())
            {
                if(nums[idx] != val)
                    nums[k++] = nums[idx++];
                else
                    idx++;
            }
            
        return k;
        
    }
};
