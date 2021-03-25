/*
A. Stones on the Table

There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

Input
The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.
The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th 
stone is red, "G", if it's green and "B", if it's blue.

Output
Print a single integer — the answer to the problem.

Examples
Input
3
RRG

Output
1

Input
5
RRRRR

Output
4

Input
4
BRBG

Output
0
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
#define int long long int

int solve(string s)
{
    char prev = s[0];
    int c = 0;
	for(int i=1; i<s.length(); i++)
    {
        if(prev == s[i])
        {
            c++;
        }
        else
            prev = s[i];
    }
    return c;
}

int32_t main(void)
{
	fast_io;
	
	int n;
	cin>>n;

    string st;
    cin>>st;

    cout<< solve(st) <<endl;

	return 0;
}
