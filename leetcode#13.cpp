class Solution {
public:
    int romanToInt(string s) {
        
        map<char,int> dict;
        dict.insert(pair<char,int>('I',1));
        dict.insert(pair<char,int>('V',5));
        dict.insert(pair<char,int>('X',10));
        dict.insert(pair<char,int>('L',50));
        dict.insert(pair<char,int>('C',100));
        dict.insert(pair<char,int>('D',500));
        dict.insert(pair<char,int>('M',1000));
        int flag = 0;
        if(s.length() == 1)
            return dict.find(s.at(0))->second;
        
        int sum_so_far = 0;
        
        for(int i = 0; i<s.length()-1; i++)
        {
            char current= s.at(i);
            char next = s.at(i+1);
            if(dict.find(current)->second < dict.find(next)->second)
            {
                sum_so_far = sum_so_far + (dict.find(next)->second - dict.find(current)->second);
                i++;
                flag = 1;
            }
            else
                sum_so_far = sum_so_far + dict.find(current)->second;
        }
        
        if(dict.find(s.at(s.length()-1))->second <= dict.find(s.at(s.length()-2))->second)
            return sum_so_far + dict.find(s.at(s.length()-1))->second;
        else
            return sum_so_far;
            
            
    
            
        
    }
};
