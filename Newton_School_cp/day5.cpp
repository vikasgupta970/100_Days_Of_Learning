/*
Red Or String?
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
You are given a string S and an integer A. You have to check whether or not the given integer A is smaller than 3200 or not. If it's smaller, print "red", otherwise print the string S.
Input
The first line of the input contains an integer A
The second line of the input contains a string S

Constraints:
1) 2800 ≤ A ≤ 5000
Output
Output the answer
Example
Sample Input 1:
3200
lol

Sample Output 1:
lol


Sample Input 2:
3800
lol

Sample Output 2:
red
*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void RorS(int A,string s){
    if(A<3200){
        cout<<"red";
    }
    else{
        cout<<s;
    }
}

int main() {
	// Your code here
    int A;
    string S;
    cin>>A;
    cin>>S;
    RorS(A,S);
    return 0;
}