class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> flag(size+1,0);
        vector<int> result;
        for(int i = 0; i<size; i++)
        {
            flag[nums[i]] = 1;
        }
        for(int i = 1; i<size+1 ;i ++)
        {
            if(flag[i] == 0)
                result.push_back(i);
        }
        return result;
    }
};
