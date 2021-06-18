class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int idx;
        int flag;
        
        for( int i =0; i<nums.size(); i++)
        {
            idx = i;
            flag = 0;
            while(flag == 0 && idx<nums.size())
            {
                if(nums[idx++] != nums[i])
                    flag = --idx;
            }
            nums[k++] = nums[--idx];
            i = idx; 
        }
        return k;
        
    }
};
