class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        int i = 1;
        int sum = 0;
        for(i = 1; i<=num/2; i++)
        {
            if(num%i == 0)
                sum = sum + i;
        }
        if(sum == num)
            return true;
        else
            return false;
        
    }
};
