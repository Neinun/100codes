class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> index(2);
        
        int n = s1.length();
        int flag = 0;
        for(int i = 0; i<n; i++)
        {
            if(s1.at(i)!=s2.at(i))
            {
                if(flag<2)
                {
                    index[flag++] = i;
                    
                }
                else
                {
                    return false;
                }
                
            }
        }
        if(flag == 0)
            return true;
        int first = index[0];
        int second = index[1];
        
        if(s1.at(first) == s2.at(second) && s2.at(first) == s1.at(second))
            return true;
        else
            return false;
        
    }
};
