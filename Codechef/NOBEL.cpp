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

void solve(int n, int m, int ary[])
{
    sort(ary, ary+n);
    int c = 1;
    int prev = ary[0];

    for(int i=0; i<n; i++)
    {
        if(ary[i] != prev)
        {
            c++;
            prev = ary[i];
        }
    }
    //cout<<"count ="<<c<<" ";
    if(c < m)
        cout<<"YES \n";
    else
        cout<<"NO \n";
}

int main(void)
{
	fast_io;
	
	ll t;	//test-cases
	cin>>t;
	
    int n, m;
	while(t--)
	{
		cin>>n>>m;
        int ary[n];
        for(int i=0; i<n; i++)
            cin>>ary[i];

		solve(n, m, ary);
	}
	
	return 0;
}
