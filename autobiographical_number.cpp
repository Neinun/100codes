#include<bits/stdc++.h>
using namespace std;
int findAuto(string s);
int main()
{
    string s;
    cin>>s;
    findAuto(s);
}
int findAuto(string s)
{
    int flag = 0;
    int a[s.length()];
    memset(a,0,sizeof(a));
    char c;
    int ic;
    int count = 0;
    for(int i = 0; i<s.length(); i++)
    {
        c = s[i];
        ic = (int)c - 48;
        a[ic]++;
    }
    for(int i = 0; i<s.length(); i++)
    {
        c = s[i];
        ic = (int)c - 48;
        if(ic != a[i]){
            flag = 1;
        }
    }
    if(flag == 0)
    {
        for(int i =0; i<s.length(); i++)
        {
            if(a[i]!=0)
                count++;
        }
        cout<<count;
    }
    else
    {
        cout<<"0";
    }

}
