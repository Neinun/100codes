class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int negative = 0;
        int positive = 0;
        for(auto i:nums)
        {
            if(i==0)
            {
                return 0;
            }
            else if(i<0)
                negative++;
            else
                positive++;
        }
        if(negative % 2 == 1)
            return -1;
        else
            return 1;
    }
};
