#include<bits/stdc++.h>
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b))
int knapsack(int wt[], int val[], int W, int n)
{
    if(n==0 || W == 0)
        return 0;
    if(wt[n-1] <= W)
        return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1), knapsack(wt,val,W,n-1));
    else if(wt[n-1]>W)
        return knapsack(wt,val,W,n-1);
}
int main()
{
    int wt[] = {1,2,3,4,5};
    int val[] = {10,9,8,7,6};
    int W = 5;
    int n = 5;
    cout<<knapsack(wt,val,W,n);
}
