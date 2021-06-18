class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        else
        {
            long long int temp = x;
            long long int t = 0;
            long long int digit;
            while(temp)
            {
                digit = temp % 10;
                t = t*10 + digit;
                temp = temp/10;
            }
            if(t == x)
                return true;
            else
                return false;
        }
        
    }
};
