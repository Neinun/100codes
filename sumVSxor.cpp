// find if l + x == l xor x 0<=x<=l

#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int numbits = (int)log2(n)+1;
        int num0 = numbits -  __builtin_popcount(n);
        cout<<pow(2,num0);
        return 0;
}
