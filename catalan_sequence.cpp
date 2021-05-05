#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll catalan(ll n)
{
	ll result[n + 1];
	result[0] = 1;
	result[1] = 1;
	for (ll i = 2; i <= n; i++) {
		result[i] = 0;
		for (int j = 0; j < i; j++)
			result[i] += result[j] * result[i - j - 1];
	}
	return result[n];
}

int main()
{
	ll n;
	cin>>n;
	cout<<catalan(n-1);
	return 0;
}
