class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count = 0;
        int prev = 0;
        if(s.at(s.length()-1) != ' ')
            s = s + ' ';
        
        for(auto c:s)
        {
            if(c != ' ')
                count++;
            else
            {
                if(count != 0)
                {
                    prev = count;
                    count = 0;  
                }     
            }        
        }
        return prev;
         
    }
};
