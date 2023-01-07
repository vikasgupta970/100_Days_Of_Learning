/*
Max ModPerm
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton is given an integer N, he has to perform 3 steps on it.

1) First - He has to create permutation of numbers from 1 to N. Let the permutation be P1, P2,. ., PN.

2) Second - He has to find the remainder, Ri, after dividing i with Pi for all i from 1 to N. Let the sequence be R1, R2,. ., RN.

3) Third - Find the sum of all the remainders, i. e. R1 + R2 +. . + RN.


Now Newton has to choose the starting permutation in such a way that the sum of the remainders after the third step is the maximum possible.

Print the maximum possible value.
Input
The first and the only line of the input contains a single integer N

Constraints;
1 ≤ N ≤ 109
Output
Output the maximum value possible by adding the remainders.
Example
Sample Input 1:
2

Sample Output 1:
1

Sample Explanation 1:
The permutation is {2, 1}
Remainders will be {0, 1}
Sum is 1.


Sample Input 2:
13

Sample Output 2:
78
*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int N;
    cin>>N;
    int sum=0;
    for(int i=1;i<=N;i++){
        if(i==N){
            sum+=0;
        }
        else if(i==1){
            sum+=1;
        }
        else{
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
