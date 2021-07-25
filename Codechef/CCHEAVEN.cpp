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

void solve(int n, char s[])
{
	//logical part starts from here
    int one_c = 0;
    int zero_c = 0;
    bool heaven = false;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
            one_c ++;
        else
            zero_c ++;
        
        float good_deed = (one_c / (float)(i+1)) * 100;
        //cout << good_deed << " ";
        if(good_deed >= 50.0)
        {
            heaven = true;
            break;
        }
    }

    if(heaven)
        cout << "YES \n";
    else
        cout << "NO \n";
}

int main(void)
{
	fast_io;
	
	ll t, l;	//test-cases
	cin >> t;
	
	while(t--)
	{
		//iterating part test cases
        cin >> l;

        char str[l];
        for(int i=0; i<l; i++)
            cin >> str[i];
        
		solve(l, str);
	}
	
	return 0;
}
