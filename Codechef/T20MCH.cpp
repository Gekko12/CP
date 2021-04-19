
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

void solve(int r, int o, int c)
{
    int left_overs = 20 - o;
    ll res = (left_overs * 6)*6 + c;

    if(res > r)
        cout<<"YES \n";
    else
        cout<<"NO \n";
}

int main(void)
{
	fast_io;
	
	int r, o, c;
    cin>>r>>o>>c;

    solve(r, o, c);
	
	return 0;
}
