/*
A. Way Too Long Words

Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
Input

The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
Output

Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.
Examples
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output
word
l10n
i18n
p43s


*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
#define int long long int

void solve(string st)
{
	string res = "";
    int len = st.length();

    if(len > 10)
    {
        res += st[0];
        res += to_string(len - 2);      //it's in #include <string>
        res += st[len -1];

        cout<<res<<endl;
    }
    else
        cout<<st<<endl;
}

int32_t main(void)
{
	fast_io;
	
	int t;	//test-cases
	cin>>t;
	
	while(t--)
	{
        string st;
        cin>>st;
		solve(st);
	}
	
	return 0;
}
