class Solution {
public:
    int mySqrt(int x) {
        int i;
        int start = 1;
        int end = x;
        long mid;
        float sq;
        if(x < 2)
            return x;
        while(start< end)
        {
            
            mid = start + ((end-start)/2);
           // sq = (float)mid *float(mid);
            if(mid * mid >x)
            {
                end = mid;
            }
            else if(mid * mid <x)
            {
                start = mid +1;
            }
            else
            {
                return mid;
            } 
        }
        return start-1 ;
        
    }
};

