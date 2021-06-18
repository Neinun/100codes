class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int num;
        int cnt = 0;
        vector<int> isPrime(33);
        for(int i=0; i<33; i++)
            isPrime[i] = 1;
        
        isPrime[0] = 0;
        isPrime[1] = 0;
        for(int i = 2; i*i<=32; i++)
        {
            if(isPrime[i])
                for(int j = i * i; j<=32; j=j+i)
                    isPrime[j] = 0;
        }
        
        for(int i = left; i<=right; i++)
        {
            num = __builtin_popcount(i);
            if(isPrime[num] == 1)
                cnt++;
        }
        return cnt;
        
    }
};
