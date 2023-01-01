/*
Calculate Inverse
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton is given a sequence of N integers A1, A2, ... , AN

He wants to calculate the inverse of the sum of the inverses of the numbers i.e. 1⁄(1⁄A1 + 1⁄A2 +. . + 1⁄AN)

Help Newton with his unwanted curiosity and print the answer to the above equation.
Input
The first line of the input contains a single integer N
The next line contains N integers, A1, A2, ... , AN.

Constraints:
1) 1 ≤ N ≤ 100
2) 1 ≤ Ai ≤ 100
Output
Output the answer, upto 8 decimal places.
Example
Sample Input 1:
2
10 30

Sample Output 1:
7.50000000

Sample Explanation 1:
1/(1/10 + 1/30) = 1/(4/30) = 30/4 = 7.5


Sample Input 2:
3
200 200 200

Sample Output 2:
66.66666666666667*/


#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double sum=0;
    for(int i: a){
       sum+=1.0/i; 
    }
    cout<<(1/sum);
}