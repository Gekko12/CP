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

void solve(int n, int k)
{
    int d = ceil((float)n/k);
    int x = k - (k*d -n);

    cout<<d<<" "<<x<<endl;
}

int main(void)
{
	fast_io;
	
	ll t;	//test-cases
	cin>>t;
	
    int n, k;
	while(t--)
	{
        cin>>n>>k;
		solve(n, k);
	}
	
	return 0;
}
