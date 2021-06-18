class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        int size = words.size();
        vector<string> output;
        for(int i = 0; i<size; i++)
        {
            for(int j = 0; j<size; j++)
            {
                if(words[j] != words[i] && words[i].find(words[j]) != -1)
                {
                    if(find(output.begin(),output.end(),words[j]) == output.end())
                        output.push_back(words[j]);
                }
            }
        }
        return output;
    }
};
