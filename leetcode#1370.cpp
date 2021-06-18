class Solution {
public:
    string sortString(string s) 
    {
        map<char,int> test;
        string result="";
        for(int i=0;i<s.size();i++)
            test[s[i]]++;
        
        while(result.size()!=s.size())
        {
              for(auto itr=test.begin();itr!=test.end();itr++)
                  if(itr->second>0)
                      result.push_back(itr->first),itr->second-=1;
          
              for(auto itr1=test.rbegin();itr1!=test.rend();itr1++)
                  if(itr1->second>0)
                      result.push_back(itr1->first),itr1->second-=1;
        }
        return result;
    }
};
