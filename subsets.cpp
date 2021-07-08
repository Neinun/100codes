//Generate subsets from a given string using recursion

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(string s, string cur="", int i=0)
{
    if(i == s.length())
    {
        cout<<cur<<"\n";
        return;
    }
    fun(s,cur,i+1);
    fun(s,cur+s[i], i+1);
    
	
}

int main() {
	
	fun("abc");
	
	return 0;
}
