class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        
        string result = "";
        if(strs.size() == 0)
            return result;
        if(strs.size() == 1)
            return strs[0];
        else
        {
            sort(strs.begin(),strs.end());
            string first = strs[0];
            string last = strs[strs.size()-1];
            int len = min(first.length(),last.length());
            for(int i = 0; i<len; i++)
            {
                if(first.at(i) == last.at(i))
                    result = result + first.at(i);
                else
                    break;
            }
            return result;
        }
    }
};
