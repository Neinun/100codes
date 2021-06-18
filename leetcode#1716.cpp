class Solution {
public:
    int totalMoney(int n) {
        
        int r = n/7;
        int x = n%7;
        int first = 1; 
        int last = 7;
        int ans = 0;
        
    
        while(r --)
        {
            ans = ans + 7 * (first + last) / 2; 
            first++;
            last++;
        }
        while(x --)
        {
            ans = ans + first;
            first++;
        }
        return(ans);
    }
};
