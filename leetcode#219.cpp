class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    
        
       map<int,int> temp;
        for(int i=0; i<nums.size(); i++)
        {
            if(temp.find(nums[i]) != temp.end())
            {
                auto x = temp.find(nums[i]);
                if(abs(i-x->second) <= k)
                    return true;
                x->second = i;
            }
            temp.insert(pair<int,int> (nums[i],i));
        }
        return false;
        
    }
};
