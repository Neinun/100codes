class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int size = nums.size();
        int i = 0,j = 1;
        while(j<size)
        {
            if((nums[i] ==0 && nums[j] != 0))
            {
                swap(nums[i],nums[j]);
                j = j + 1;
                i = i + 1;
                
            }
            else if((nums[i]==0 && nums[j] == 0))
            {
                j++;
            }
            else
            {
                j = j + 1;
                i = i + 1;
            }
            
                
        }
    }
};
