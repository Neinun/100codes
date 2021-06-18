class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.length()!=t.length()) return false;
    unordered_map<char,char> mp;
    int vis[256]={0};
    
    for(int i=0;i<s.length();i++){
        
        if(mp.find(s[i])!=mp.end()){
            if(t[i]!=mp[s[i]]) return false;
        }
        else if(vis[t[i]]) return false;
        else {
            mp[s[i]]=t[i];
            vis[t[i]]=1;
        }
    }
    return true;

        
    }
};
