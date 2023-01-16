/*
Stringing
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton has 2 strings P and Q. He wants to create a new string Z. String Z can only be formed by concatenating Q and P in this order without any white spaces.

Print the resulting string.
Input
The first line of the input contains two space separated strings P and Q.

Constraints:
1 ≤ |P| ≤ 103
1 ≤ |Q| ≤ 103
Output
Print the resulting string.
Example
Sample Input 1:
school newton

Sample Output 1:
newtonschool


Sample Input 2:
newton school

Sample Output 2:
schoolnewton
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    string P,Q;
    cin>>P>>Q;
    cout<<Q+P;
    return 0;
}