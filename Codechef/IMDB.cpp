/*
Motivation

Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has X GB of space remaining. His friend has N movies represented with (Si,Ri)
representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.The first line of each test case contains two space-separated integers N and X.N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ri

Output
For each test case, print a single line containing one integer - the highest rating of an IMDB movie which Chef can store in his hard disk.

Constraints
1≤T≤10
1≤N≤5⋅10^4
1≤X≤10^9
1≤Si,Ri≤10^9 for each valid i X≥Si for atleast one valid i

Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
1 1
1 1
2 2
1 50
2 100
3 2
1 51
3 100
2 50

Example Output
1
100 
51

Explanation
Example case 1: Since there is only 1
movie available and requires space equivalent to the empty space in the hard disk, Chef can only obtain maximum IMDB rating of 1

Example case 2: Since out of the 2
available movies, both can fit in the free memory, we only care to take the one with higher rating, i.e, rating of max(50,100)=100

Example case 3: Since out of the 3
available movies, only the first and the last movies fit in the free memory, we only care to take the one with higher rating amongst these 2, i.e, rating of max(51,50)=51
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007

using ll = long long;	
//this is modern way and less error prone, because #define blindly substitute without checking 

void solve(ll n, ll x, ll s[], ll r[])
{
    ll max_rating = 0;
    
    for(ll i=0; i<n; i++)
    {
        if(s[i]<=x && r[i] >= max_rating)
        {
            max_rating = r[i];
        }            
    }

    cout<<max_rating<<endl;
}

int main(void)
{
	fast_io;
	
	ll t;	//test-cases
	cin>>t;
	
    ll n, x;
	while(t--)
	{
		cin>>n>>x;

        ll s[n], r[n];
        for(ll i=0; i<n; i++)
            cin>>s[i]>>r[i];

		solve(n, x, s, r);
	}
	
	return 0;
}
