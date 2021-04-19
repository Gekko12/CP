/*
A string is said to be using strong language if it contains at least K consecutive characters '*'.
You are given a string S with length N. Determine whether it uses strong language or not.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains a single string S with length N

Output
Print a single line containing the string "YES" if the string contains strong language or "NO" if it does not (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤10
1≤K≤N≤10^6
S contains only lowercase English letters and characters '*'
Sum of N over all testcases is atmost 10^6

Subtasks
Subtask #1 (30 points): N≤10^4, Sum of N over all testcases is atmost 10^4

Subtask #2 (70 points): original constraints

Example Input
3
5 2
*a*b*
5 2
*a**b
5 1
abcde

Example Output
NO
YES
NO

Explanation
Example case 1: Since there are no two consecutive characters '*', the string does not contain strong language.

Example case 2: There are two adjacent characters '*', so the string contains strong language.

Example case 3: Since there are no characters '*' in the string, it does not contain strong language.
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007

using ll = long long;	
//this is modern way and less error prone, because #define blindly substitute without checking 

void solve(int n, int k, char str[])
{
    int count = 0;
    //bool got = true;
    bool ans = false;

    for(int i=0; i<n; i++)
    {
        if(str[i]=='*')
        {
            count ++;
            if(count >= k)
            {
                ans = true;
                break;
            }
        }
        else if(i > (n-k))
            break;
        else
        {
            count = 0;
        }
    }

    if(ans)
        cout<<"YES \n";
    else
        cout<<"NO \n";
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
        
        char str[n];
        for(int i=0; i<n; i++)
            cin>>str[i];
        
		solve(n, k, str);
	}
	
	return 0;
}
