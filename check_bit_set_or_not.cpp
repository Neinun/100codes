#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int i = 1;
    int bit_to_check = 2;
        while(bit_to_check--)
        {
            n = n>>1;
        }
        if(n & 1 == 1)
          cout<<"set";
        else
            cout<<"Not Set";
}
