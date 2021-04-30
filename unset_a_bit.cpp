#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x;
    cin>>n;
    cin>>x;
    int temp = 1;
    while(x--)
    {
        temp = temp << 1;
    }
    cout<<(n & (~temp));

}
