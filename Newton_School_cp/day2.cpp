/*
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton is given 3 integer T1, T2 and T3.

If T1 + T2 + T3 ≥ 22, print "bust"; otherwise print "win"
Input
The first and the only line of the input contains 3 positive integers T1, T2 and T3.

Constraints:
1 ≤ T1, T2, T3 ≤ 15
Output
Print the answer in a single line
Example
Sample Input 1:
1 2 3

Sample Output 1:
win


Sample Input 2:
10 10 10

Sample Output 2:
bust
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void check(int T1,int T2,int T3){
    if(T1+T2+T3>=22){
        cout<<"bust";
    }
    else{
        cout<<"win";
    }
}

int main() {
	// Your code here
    int t1,t2,t3;
    cin>>t1>>t2>>t3;
    check(t1,t2,t3);
    return 0;
}