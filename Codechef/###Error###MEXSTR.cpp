/*
You are given a binary string S. Chef defines MEX(S) as the smallest non-negative integer such that its binary representation (without leading '0'-s; in particular, the binary representation of 0 is "0") is not a subsequence of S.

Chef is asking you to find MEX(S). Since this integer could be very large, find its binary representation (without leading '0'-s).

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S

Output
For each test case, print a single line containing one string: MEX(S)in binary representation.

Constraints
1≤T≤10^5
1≤|S|≤10^6
S contains only characters '0' and '1'
the sum of |S| over all test cases does not exceed 2⋅10^6

Subtasks
Subtask #1 (20 points):
1≤T≤2⋅10^3
|S|≤10

Subtask #2 (20 points):
1≤T≤10^5
|S|≤60

Subtask #2 (60 points):
original constraints

Sample Input
2
1001011
1111

Example Output
1100
0 

Explanation
Example case 1: All integers between 0 and 11 inclusive, in binary representation, appear in S as subsequences. However, the binary representation of 12 (which is "1100") is not a subsequence of S

Example case 2: Since S contains only '1'-s, the string "0" is not a subsequence of S and therefore MEX(S)=0. 
*/

#include <bits/stdc++.h>
#include <string>
#include <bitset>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007

using ll = long long;	

set <int> subseq;

void print_subseq(string input, string output)
{
    if(input.length() == 0)
    {
        if(output.length() == 0)
            subseq.insert(-1);
        else
		{
			//stringstream ss(output);
			int num = 0;
			num = stoi(output, 0, 2);
            subseq.insert(num);
		}
        return ;
    }

    print_subseq(input.substr(1), output);
    print_subseq(input.substr(1), output+input[0]);
}

int main(void)
{
	fast_io;
	
	ll t, res;	//test-cases
	cin>>t;
	
	while(t--)
	{	
		string s;
		cin>>s;

		int one_count = 0;
		res = 0;
		for(int i=0; i<s.length(); i++)
			if(s[i] == '1')
				one_count++;
		
		if(one_count == s.length())
		{
			cout<<"0 \n";
			continue;
		}

		subseq.clear();
		
		print_subseq(s, "");

		vector <int> vect;
		for(auto i: subseq)
		{
			vect.push_back(i);
		}

		sort(vect.begin(), vect.end());
		int c = -1;
		for(auto i: vect)
		{
			//cout<<i<<" ";
			if(c != i)
			{
				std::string binary = std::bitset<32>(c).to_string(); //to binary
    			res = stoi(binary, 0, 10);
				break;
			}
			c++;
		}
		cout<<to_string(res)<<endl;
		cout<<"WRONG ANSWER"<<endl;
	}
	
	return 0;
}
