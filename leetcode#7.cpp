class Solution {
public:
    int reverse(int x) {
        
        long long int temp = x;
        long long int t = 0;
        int digit;
        
        
        while(temp)
        {
            digit = temp % 10;
            if((t * 10) + digit > INT_MAX || (t * 10) + digit < INT_MIN)
                return 0;
            else
                t = (t * 10) + digit;
            temp = temp / 10;
        }
        
        return t;
    }
};
