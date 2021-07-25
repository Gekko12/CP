/*
Coins And Triangle Problem Code: TRICOIN

Chef belongs to a very rich family which owns many gold mines. Today, he brought N gold coins and decided to form a triangle using these coins. Isn't it strange?

Chef has a unusual way of forming a triangle using gold coins, which is described as follows:
    He puts 1 coin in the 1st row.
    then puts 2 coins in the 2nd row.
    then puts 3 coins in the 3rd row.
    and so on as shown in the given figure.

Chef is interested in forming a triangle with maximum possible height using at most N coins. Can you tell him the maximum possible height of the triangle?

Input
The first line of input contains a single integer T denoting the number of test cases.
The first and the only line of each test case contains an integer N denoting the number of gold coins Chef has.

Output
For each test case, output a single line containing an integer corresponding to the maximum possible height of the triangle that Chef can get.

Constraints
    1 ≤ T ≤ 100
    1 ≤ N ≤ 10^9

Subtasks
    Subtask 1 (48 points) : 1 ≤ N ≤ 10^5
    Subtask 2 (52 points) : 1 ≤ N ≤ 10^9

Example
Input
3
3
5
7

Output
2
2
3

Explanation
    Test 1: Chef can't form a triangle with height > 2 as it requires atleast 6 gold coins.
    Test 2: Chef can't form a triangle with height > 2 as it requires atleast 6 gold coins.
    Test 3: Chef can't form a triangle with height > 3 as it requires atleast 10 gold coins.

*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

using ll = long long;
const int N = 1e9 ;


ll solve(ll n)
{
    ll res = (-1 + sqrt(1LL + 8*n)) / 2;
    
    return res;
}

ll solve_slow(ll n)
{
    ll res = 0;
    ll i = 1;
    ll sum = 0;

    while(true)
    {
        sum += i;
        if(sum > n)
        {
            sum -= i;
            break;
        }
        i++;
        res ++;
    }
    return res;
}

int main(void)
{
    // testing naive and efficient solution
    /*while(true)
    {
        ll n = rand() % N + 1 ;
        cout << n << endl;

        ll res1 = solve(n);
        ll res2 = solve_slow(n);

        cout << res1 << " " << res2 << endl;
        if(res1 == res2)
            cout << "OK \n";
        else
        {
            cout << "WRONG Answer !! \n";
            break;
        }
    }
    */
   fast_io;

   int t;
   cin >> t;

   while(t--)
   {
       ll n;
       cin >> n;

       cout << solve(n) << endl;
   }

    return 0;
}