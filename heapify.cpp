//Heapify a given unordered List

#include<bits/stdc++.h>
using namespace std;

void makeheap(int a[], int n, int i)
{
    int root = i;
    int l = (2*i) + 1;
    int r = (2*i) + 2;

    if(l<n && a[l]>a[root])
        root = l;
    if(r<n && a[r]>a[root])
        root = r;
    if(root != i)
    {
        swap(a[i], a[root]);
        makeheap(a,n,root);
    }
}
void printheap(int arr[], int n)
{
    cout << "Array representation of Heap is:\n";

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}




void heapify(int a[], int n)
{
    int start = (n/2) - 1;

    for(int i=start; i>=0; i--)
    {
        makeheap(a,n,i);
    }
}



int main()
{
    int a[] = {5,2,3,4,1,6,9,10};
    int n = sizeof(a) / sizeof(a[0]);
    heapify(a,n);
    printheap(a,n);

}
