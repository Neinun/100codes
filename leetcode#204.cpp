class Solution {
public:
    int countPrimes(long long int n) {
        
        if(n == 0)
            return 0;
        
        vector<char> isPrime(n+1,true);
        isPrime[0] = false;
        isPrime[1] = false;
        for(long long int i = 2; i*i<n; i++)
        {
            if(isPrime[i])
            for(long long int j = i*i; j<n; j = j+i)
                isPrime[j] = 0;         
        }
        long long int cnt=0;
        for(int i = 2; i<n; i++)
        {
            if(isPrime[i])
                cnt++;
        }
        
        return cnt;
    }
};
