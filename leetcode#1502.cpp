class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=0;
        int flag = 0;
        for(i=0;i<arr.size()-2;i++)
        {
            if((arr[i+1]-arr[i])==(arr[i+2]-arr[i+1]))
                continue;
            else{
                flag = 1;
                break;
            }
        }
        
        if(flag == 0)
            return true;
        else
            return false;
        
    }
};
