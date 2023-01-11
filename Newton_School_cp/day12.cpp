/*
Broken Ways
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton is standing before a typical staircase with N steps. Newton is standing on the 0-th step and wants to go to the N-th step. To reach the top he can either take a single step or he can take a double step (two steps) at the same time.

However, M of the N steps are broken i. e. S1, S2, ... , SM are broken and Newton cannot visit those steps,

Find out the number of different ways in which Newton can climb to the top of the staircase. Since the number can be very large, find it modulo 1,000,000,007
Input
The first line contains two integers, N and M.
The next M lines contains a single integer each, Si

Constraints:
1) 1 ≤ N ≤ 2 x 105
2) 0 ≤ M ≤ N - 1
3) 1 ≤ S1 < S2, < ... < SM ≤ N - 1
Output
Print the number of ways
Example
Sample Input 1:
6 1
3

Sample Output 1:
4

Sample Explanation 1:
There are four ways to climb up the stairs, as follows:

0→1→2→4→5→6
0→1→2→4→6
0→2→4→5→6
0→2→4→6


Sample Input 2:
100 5
1
23
45
67
89

Sample Output 2:
608200469
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
const unsigned int M = 1000000007;
long long int N[200002];
long long int DP[200002];
long long int steps(long long int i,long long int n)
{   if(i==n)
      {return 1;}
    if(N[i])
      return 0;
    if(i>n)
      return 0;  
    if(DP[i])
      return DP[i];
    return DP[i]=(steps(i+1,n)+steps(i+2,n))%M;
}
int main() {
	long long int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        N[x]=1;
    }
    
    cout<<steps(0,m)<<endl;
    return 0;
}