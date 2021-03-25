/*
One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.

Input
The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.

Output
Print a single integer — the number of problems the friends will implement on the contest.

Examples
Input
3
1 1 0
1 1 1
1 0 0

Output
2

Input
2
1 0 0
0 1 1

Output
1

Note
In the first sample Petya and Vasya are sure that they know how to solve the first problem and all three of them know how to solve the second problem. That means that they will write solutions for these problems. Only Petya is sure about the solution for the third problem, but that isn't enough, so the friends won't take it.

In the second sample the friends will only implement the second problem, as Vasya and Tonya are sure about the solution.
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
#define int long long int

int solve(int ary[])
{
	int c = 0;
    for(int i=0;i<3;i++)
        if(ary[i])
            c++ ;
    if(c < 2)
        return 0;
    return 1; 
}

int32_t main(void)
{
	fast_io;
	
	int t;	//test-cases
	cin>>t;
	
    int ary[3], count=0;
	while(t--)
	{
		for(int i=0; i<3; i++)
            cin>>ary[i];
        
		count += solve(ary);
	}
    cout<<count<<endl;
	
	return 0;
}
