/*
A. Beautiful Matrix
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

    Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
    Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5). 

You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

Input
The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

Output
Print a single integer — the minimum number of moves needed to make the matrix beautiful.

Examples
Input
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0

Output
3

Input
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0

Output
1
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
#define mod 1000000007
#define int long long int

void solve()
{
	//logical part starts from here
}

int32_t main(void)
{
	fast_io;
	
	int ary[5][5], x, y;
    int dest_x = 2, dest_y = 2; //because it's the mid position

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>ary[i][j];
            if(ary[i][j])
                x = i, y = j;
        }
    }

    int res = abs(x - dest_x) + abs(y - dest_y);
    cout<< res <<endl;
	
	return 0;
}
