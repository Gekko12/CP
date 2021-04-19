/*
LunchTime

There are N students standing in a canteen queue, numbered 1 to N from left to right. For each valid i, the i-th student has a height hi.

Two students i and j can see each other if there are no taller students standing between them. Formally, students i and j (i<j) can see each other if for each integer k (i<k<j), hk≤hi,hj.

For each valid i, determine the number ci of students that have the same height as student i and can be seen by student i.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.The first line of each test case contains a single integer N
.The second line contains N space-separated integers h1,h2,…,hN.

Output
For each test case, print a single line containing N space-separated integers c1,c2,…,cN

Constraints
1≤T≤10
1≤N≤10^5
1≤hi≤10^9
for each valid i the sum of N over all test cases does not exceed 10^5

Subtasks
Subtask #1 (30 points): the sum of N over all test cases does not exceed 10^3
Subtask #2 (70 points): original constraints

Example Input
1
5
1 2 2 3 2

Example Output
0 1 1 0 0

Explanation
Example case 1: Student 3 can see students 2 and 4, but only student 2 has the same height (height 2). On the other hand, student 3 cannot see student 5 since student 4 is taller and therefore blocking the view.
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007

using ll = long long;	
//this is modern way and less error prone, because #define blindly substitute without checking 

void solve(ll n, vector <int> ary)
{
	vector<int> cnt(n, 0);
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(ary[i] < ary[j])
				break;
			if(ary[i] == ary[j])
				cnt[i]++, cnt[j]++;
		}
	}

	for(int i=0; i<n; i++)
		cout<<cnt[i]<<" ";
	cout<<endl;
}

int main(void)
{
	fast_io;
	
	ll t;	//test-cases
	cin>>t;
	
	while(t--)
	{
		ll n;
        cin>>n;

        vector<int> ary(n);
        for(int i=0; i<n ;i++)
            cin>>ary[i];

		solve(n, ary);
	}
	
	return 0;
}
