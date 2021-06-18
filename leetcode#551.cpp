class Solution {
public:
    bool checkRecord(string s) {
        
        int len = s.length();
        int count_a = 0;
        for(int i = 0; i<len; i++)
        {
            if(s.at(i) == 'A')
                count_a++;
        }
        if(s.find("LLL") == -1 && count_a<2)
            return true;
        else
            return false;
        
    }
};
