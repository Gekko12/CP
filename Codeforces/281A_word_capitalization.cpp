/*
A. Word Capitalization

Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.
Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
Input
ApPLe

Output
ApPLe

Input
konjac

Output
Konjac
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

int main(void)
{
	fast_io;
	
	string s;
	cin>>s;
	
	string res = "";
	res += toupper(s[0]) ;
	
	for(int i=1; i<s.length(); i++)
		res += s[i];
	
	cout<< res <<endl;
	return 0;
}
			
	

