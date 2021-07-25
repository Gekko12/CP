
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


int main(void)
{
	fast_io;
	
	ll n;	//test-cases
	cin >> n;
	
    ll a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    ll sum = 0;
    for(int i=0; i<n; i++)
    {   
        if(sum > mod)
            sum = (sum + a[i]) % mod;
        else
            sum += a[i];
    }
    
    ll q;
    cin >> q;

    int query[q];
    for(int i=0; i<q; i++)
        cin >> query[i];
    
    ll res = 0;
	while(q--)
	{
        if(sum*2 > mod)
		    res = (sum * 2) % mod;
        else
            res = sum * 2;
        cout << res << '\n';    //WRONG ANSWER
        sum = res;
	}
	
	return 0;
}
