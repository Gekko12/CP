/*

There is only 1 TV in the common room, and as luck would have it, both the El Clasico football match and the India-Pakistan cricket match are happening simultaneously.

There is one football fan who is looking at the live commentary online and will scream whenever an 'important' event takes place in the El Clasico. Similarly, there is a cricket fan who will do so for every important event in the cricket match.

You are given two arrays - F1,F2,…,Fn, which denote the times when an important event happens in the football match. And similarly C1,C2,…,Cm for cricket. You sadly have the remote in hand. You start out by watching the El Clasico. But whenever an Important event happens in the sport which isn't on the TV right now, you will be forced to switch to that sport's channel, and this continues, i.e., you switch channels if and only if when an important event in the other sport happens. Find the total number of times you will have to switch between the channels.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of 3 lines of input.
First line contain 2 space separated integers N and M, number of important events in football and cricket match respectively.

Second line contain N
space separated integers Fi, where the ith index represents ith important event in the football match.

Third line contain M space separated integers Ci, where the ith index represents ith important event in the cricket match.

Output:
For each testcase, output in a single line answer to the problem.

Constraints
1≤N,M≤2.5∗10^4
1≤Fi,Ci≤10^9
Fi>Fi−1
∀i>0
Ci>Ci−1
∀i>0
Fi!= Cj ∀i,j
Sum of N over all tests is atmost 2∗105
Sum of M over all tests is atmost 2∗105

Sample Input:
3
2 2
1 3
2 4
3 1
100 200 300
1
1 2
1
100 200

Sample Output:
3
2
1

Explanation:

Case 1: At T=0
, we are watching El Clasico. At T=1 there is an important event in football match and since we are already watching the same channel we won't switch. At T=2, there is an important event in cricket match and we switch the channel for the first time. At T=3, there is an important event in football match and we switch the channel for the second time. At T=4, there is an important event in cricket match and we switch the channel for the third time. So in total we switch three times.

Case 2: At T=0
, we are watching El Clasico. At T=1 there is an important event in cricket match and we switch the channel for the first time. At T=100, there is an important event in football match and we switch the channel for the second time. At T=200, there is an important event in football match and since we are on the same channel, we don't switch. At T=300, there is an important event in football match and since we are on the same channel, we don't switch. So in total we switch two times.

Case 3: At T=0
, we are watching El Clasico. At T=1 there is an important event in football match and since we are on the same channel, we don't switch. At T=100, there is an important event in cricket match and we switch the channel for the first time. At T=200, there is an important event in cricket match and since we are on the same channel, we don't switch. So in total we switch only one time.
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
	
	ll t;	//test-cases
	cin>>t;
	
    int n, m, x;
	while(t--)
	{
        cin>>n>>m;

        // Let's 1 means Football and 0 means cricket
        vector <pair <int, int>> vec;
        vec.clear();

        for(int i=0; i<n; i++)
        {
            cin>>x;
            vec.push_back(make_pair(x, 1));
        }

        for(int i=0; i<m; i++)
        {
            cin>>x;
            vec.push_back(make_pair(x, 0));
        }

        sort(vec.begin(), vec.end());
        
        int p = 1, ans = 0;
        for(int i = 0; i < n + m; i++)
        {
            if(vec[i].second != p)
            {
                ans++; 
                p = vec[i].second;
            }
        }
        cout<<ans<<"\n";
	}
	
	return 0;
}
