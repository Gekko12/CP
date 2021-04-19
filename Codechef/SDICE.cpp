/*
Chef has N 6-sided standard dice. Each die has dimensions 1×1×1. Since Chef is bored during the 
quarantine, he decides to stack dice for fun.

First, Chef forms four vertical stacks of dice (not necessarily with the same height; empty stacks are allowed) on his table, which together make up a pile of dice with base area up to 2×2. Among all such structures, the total visible surface area of Chef's structure must be the smallest possible.

Then, Chef calculates the number of pips on the visible faces of all dice in the structure. A face of a die is visible if it does not touch the table or another die.

Now, he is wondering: among all possible arrangements of dice, what is the maximum possible total number of visible pips? Since he is busy cooking, he is asking you to solve this.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N

Output
For each test case, print a single line containing one integer ― the maximum possible number of visible pips.

Constraints
1≤T≤10^5
1≤N≤10^12

Subtasks
Subtask #1 (10 points):
T≤100
N≤4

Subtask #2 (10 points):
T≤100
N≤8

Subtask #3 (25 points):
T≤100
N≤10^4

Subtask #4 (55 points): original constraints

Example Input
1
1

Example Output
20

Explanation
Example case 1: There is only one die. If Chef places it on the table with 1 pip facing down, the visible pips are 2, 3, 4, 5 and 6, and their sum is 20

Hint by G1 -
					______________________________
				  /				 /  			 /|
				 /              /               / |
				/      4       /      4        /  |
			   /              /               /   |
			  /              /               /    |
			  ------------------------------|     |
			/               /              /|  5  |
		   /               /              / |    /
		  /        4      /        4     /  |   / 
		 /               /              /   |  /  
		/               /              /    | /     
        -------------------------------|    |/
       |               |               | 5  /
       |               |               |   /
       |      6        |        6      |  /
       |               |               | /
       |               |               |/
       |------------------------------ |
  That's how a layer side view results 44 ie (6+5)*4  
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007

using ll = long long;	

// Use dice to view this
int pips[] = {16, 32, 44, 55};

void solve(ll n)
{
	ll res = 0;

	if(n <= 4)
	{
		switch (n)
		{
		case 1: res = 20;
			break;
		case 2: res = 36;
			break;
		case 3: res = 51;
			break;
		case 4: res = 60;
			break;
		}
		cout<<res<<"\n";
	}
	else
	{
		// For each sandwich layer side-view sum is 44 ie.(6+5)*4
		int layer_side_view_sum = 44;
		int rem = n % 4;
		//cout<<"rem: "<<rem<<" pips[rem]: "<<pips[rem]<<" ";
		res = (n/4)*layer_side_view_sum + pips[rem];
		cout<<res<<endl;
	}
}

int main(void)
{
	fast_io;
	
	ll t, n;	//test-cases
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		solve(n);
	}
	
	return 0;
}
