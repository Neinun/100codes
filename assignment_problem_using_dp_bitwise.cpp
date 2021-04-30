#include<bits/stdc++.h>
using namespace std;


int countSetBits(int n)
{
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}

int main()
{
    int i,j;
    int x;
    int n = 2;
    int cost[n][n];
    for(int i = 0; i< n; i++)
    {
        for( j =0; j< n ; j++)
        {
            cin>>cost[i][j];
        }
    }

    int size = pow(2,n);
    int a[size];
    for(i = 0;i<size; i++)
    {
        a[i] = std::numeric_limits<int>::max();
    }
    a[0] = 0;
    int temp;
    for(mask = 0; mask< size; i++)
    {
        x = countSetBits(mask);
        for( j = 0; j<n;j++)
        {
            temp = mask | 1<<j;
            a[temp] = min(a[temp], cost[x][j] + a[mask]);
        }

        mask++;
    }
}
