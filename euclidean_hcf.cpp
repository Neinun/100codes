#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
    if(b == 0)
    return a;
    else
    return hcf(b,a%b);
}


int main() {
	int a = 7, b = 14;
	cout<<hcf(a,b);
	return 0;
}
