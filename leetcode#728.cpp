class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int temp;
        int flag = 0;
        int d;
        vector<int> result;
        for(int i = left; i<=right; i++)
        {
            temp = i;
            flag = 0;
            while(temp)
            {
                d = temp%10;
                if(d==0 || i%d != 0)
                    flag = 1;
                temp = temp/10;
            }
            if(flag == 0)
                result.push_back(i);
            flag = 0;
        }
        return result;
    }
};
