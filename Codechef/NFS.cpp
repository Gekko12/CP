/*
Turn It

Chef is playing Need For Speed. Currently, his car is running on a straight road with a velocity U metres per second and approaching a 90∘ turn which is S metres away from him. To successfully cross the turn, velocity of the car when entering the turn must not exceed V metres per second.

The brakes of Chef's car allow him to slow down with a deceleration (negative acceleration) not exceeding A metres per squared second. Tell him whether he can cross the turn successfully. The velocity v when entering the turn can be determined from Newton's 2nd law to be v^2=U^2+2⋅a⋅S if the car is moving with a uniform acceleration a.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers U, V, A and S

Output
For each test case, print a single line containing the string "Yes" if Chef can cross the turn successfully or "No" if he cannot (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤1065
1≤U,V,A,S≤10^4

Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
1 1 1 1
2 1 1 1
2 2 1 1

Example Output
Yes
No
Yes

Explanation
Example case 1: Since U=V=1, Chef does not need to brake and will be able to turn successfully.

Example case 2: The smallest velocity Chef's car can have even with the maximum deceleration is
sqrt(2⋅2−2⋅1⋅1) = sqrt(2), which is greater than the maximum allowed velocity for a safe turn.

Example case 3: The smallest velocity Chef's car can have with the maximum deceleration is again 
sqrt(2), which is smaller than the maximum allowed velocity for a safe turn.
*/

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007

using ll = long long;	

void solve(int u, int v, int a, int s)
{

    double calcu = (u*u) - (2*a*s);
    //cout<<sqrt(calcu)<<" ";

    if(calcu <= v*v)
        cout<<"YES \n";
    else
        cout<<"NO \n";
   
}

int main(void)
{
	fast_io;
	
	ll t;	//test-cases
	cin>>t;
	
    int u, v, a, s;
	while(t--)
	{
        cin>>u>>v>>a>>s;
		solve(u, v, a, s);
	}
	
	return 0;
}
