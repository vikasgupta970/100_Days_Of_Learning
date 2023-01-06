/*
Socket Problem
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton has shifted to a new house and it came to his notice that there is only one socket in his house !!!

Newton does a lot of experiments using electricity and wants at least B sockets in his house.

Furthermore, he has ample amount of extension cords and each extension has A sockets and takes one socket. In others words, an extension cord extends one socket into A sockets.

You need to tell Newton how many extension cords will be required so that he can have at least B sockets.
Input
The first and the only line of the input contains 2 single integers A and B

Constraints:
1) 2 ≤ A ≤ 200
2) 1 ≤ B ≤ 200
Output
Print the answer
Example
Sample Input 1:
4 10

Sample Output 1:
3

Sample Explanation 1:
3 power strips, each with 4 sockets, extend the socket into 10 empty sockets.


Sample Input 2:
8 9

Sample Output 2:
2
*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int A,B;
    cin>>A>>B;
    if(B==1){
        cout<<0;
    }
    else if(A==B){
        cout<<1;
    }
    else if(B%(A-1)<=1){
        cout<<(B/(A-1));
    }
    else{
    cout<<(B/(A-1))+1;
    }
    return 0;
}