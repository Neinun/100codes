//find the Kth smallest element in an array of size N


#include<bits/stdc++.h>
using namespace std;
void heapify(int b[], int k, int i)
{
    int root = i;
    int l = (2*i) + 1;
    int r = (2*i) + 2;

    if( l<k && b[l] > b[root])
        root = l;
    if( r<k && b[r] > b[root])
        root = r;
    if( root!=i)
    {
        swap(b[root],b[i]);
        heapify(b,k,root);
    }
}
void makeheap(int b[], int k)
{
    int start = (k/2)-1;
    for(int i=start; i>=0; i--)
    {
        heapify(b,k,i);
    }
}
int main()
{
    int a[] = {5,2,3,4,1,6,9,10};
    int n = sizeof(a) / sizeof(a[0]);
    int k;
    cin>>k;
    int b[k];
    for(int i=0; i<k; i++)
    {
        b[i] = a[i];
    }
    makeheap(b,k);
    for( int i = k; i<n; i++)
    {
        if(a[i]<b[0]){
            swap(a[i],b[0]);
            makeheap(b,k);
        }
    }
    cout<<b[0];
}

