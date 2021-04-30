#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n = 5;
    int W = 5;
    int wt[] = {1,2,3,4,5};
    int val[] = {10,9,8,7,6};
    int t[n+1][W+1];
    for(int i=0;i<n+1; i++)
        for(int j=0; j<W+1; j++)
            if( i==0 || j==0)
                t[i][j] = 0;
    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<W+1; j++)
        {
            if(wt[i-1] <= j)
                t[i][j] = max(t[i-1][j], val[i-1]+t[i-1][j-wt[i-1]]);
            else
                t[i][j] = t[i-1][j];
        }
    }
    for(int i=0;i<n+1; i++)
    {
        for(int j=0; j<W+1; j++)
            cout<<t[i][j]<<"\t";
        cout<<endl;
    }




}
