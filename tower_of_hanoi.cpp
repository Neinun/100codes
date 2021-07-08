#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(int n, int a, int b, int c)
{
	if(n==1){
	    cout<<"Move from "<<a<<" to "<<c<<"\n";
	    return;
	}
	    
    
    fun(n-1,a,c,b);
        cout<<"Move from "<<a<<" to "<<c<<"\n";
    fun(n-1,b,a,c);
    
	
}

int main() {
	
	fun(3,1,2,3);
	
	return 0;
}
