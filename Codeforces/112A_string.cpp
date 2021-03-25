/*
A. Petya and Strings

Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
Input
aaaa
aaaA

Output
0

Input
abs
Abz

Output
-1

Input
abcdefg
AbCdEfF

Output
1

*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
#define int long long int

int solve(string s1, string s2)
{
    for(int i=0; i<s1.length(); i++)
    {
        if(tolower(s1[i]) < tolower(s2[i]))     //tolower() coverts a char into lowercase
            return -1;
        else if(tolower(s1[i]) > tolower(s2[i]))
            return 1;
    }
    return 0;
}

int32_t main(void)
{
	fast_io;
	
	string s1, s2;
    cin>>s1>>s2;

    cout<< solve(s1, s2) <<endl;
	
	return 0;
}
