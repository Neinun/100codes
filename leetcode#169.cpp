class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> temp;
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(temp.count(nums[i]) == 0)
                temp.insert(pair<int,int>(nums[i],1));
            else
                temp[nums[i]] += 1;
        }
        int max = INT_MIN;
        int result;
        for(auto i:temp)
        {
            if(i.second>max)
            {
                max = i.second;
                result = i.first;
            }
        }
        return result;
        
    }
};
