class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.length() == 0)
            return t.at(0);
        int result1 = s.at(0);
        int result2 = t.at(0);
        int final_result;
        for(int i = 1; i<s.length(); i++)
        {
            result1 = result1 ^ s.at(i);
        }
        for(int i = 1; i<t.length(); i++)
        {
            result2 = result2 ^ t.at(i);
        }
        final_result = result1 ^ result2;
        return (char)final_result;
    }
};
