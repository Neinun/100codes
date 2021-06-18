class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int total_sum = n * (n+1)/2;
        int sum = accumulate(nums.begin(),nums.end(),0);
        return total_sum - sum;
        
    }
};
