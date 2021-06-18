class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            
            if(prevMap.count(diff)) 
                return { 
                prevMap[diff]+1, i+1
                };
            prevMap[nums[i]] = i;
        }
        return {};
    }
};
