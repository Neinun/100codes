



#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b, int c)
{
    if(a>b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(b>c)
            return b;
        else
            return c;
    }
}

int fun(int n, int a, int b, int c)
{
	if(n==0)
	    return 0;
    if(n<0)
        return -1;
    int res = max(fun(n-a,a,b,c),fun(n-b,a,b,c),fun(n-c,a,b,c));
    
    if(res == -1)
        return -1;
    return res+1;
	
}

int main() {
	
	cout<<fun(23,12,11,14);
	
	return 0;
}
