/*
To increase the startup speed during solving competitive programming 
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007

using ll = long long;	
//this is modern way and less error prone, because #define blindly substitute without checking 

string solve(ll n, ll w, ll wr, ll wi[])
{
    ll remaining = w - wr;

    int m = n / 2;
    if(remaining <= 0)
        return "YES";
    else if((remaining - m*2) <= 0)
        return "YES";
    return "NO";
}

int main(void)
{
	fast_io;
	
	ll t;	//test-cases
	cin>>t;
	
    ll n, w, wr;
	while(t--)
	{
        cin >> n >> w >> wr;

        ll wi[n];
        for(int i=0; i<n; i++)
            cin >> wi[i];

		cout << solve(n, w, wr, wi) << '\n';
	}
	
	return 0;
}
