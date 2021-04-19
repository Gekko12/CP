/*
A. Soldier and Bananas

A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).
He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

Input
The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 10^9), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

Output
Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

Examples
Input
3 17 4

Output
13

*/
#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"

using namespace std;
using ll = long long;


void solve(ll k, ll n, ll w)
{
    ll amt = 0;
    for(ll i=1; i <= w; i++)
    {
        amt += (k*i);
    }

    if(amt <= n)
        cout<<"0 \n";
    else
        cout<< (amt - n) <<endl;
}

int main(void)
{
    fast_io;

    ll k, n, w;
    cin>>k>>n>>w;
    
    solve(k, n, w);

    return 0;
}