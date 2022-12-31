/*Newton Gold Magic
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton knows magic and he can mysteriously combine several items to create new items.

One day, Newton got his hand on N bars of gold. He cannot carry all of the N bars, so he used his magic to combine bars.

Each gold bar has a weight represented by Wi (1 ≤ i ≤ N).

In one operation, Newton can take 2 bars of gold and combine them to create a single bar of gold. The weight of the new bar is (X+Y)/2 where X and Y represent the weights of the two initial bars.

Newton will perform this operation N-1 times and in the end, he will be left with only one bar of gold.

Find out the maximum possible weight of the final bar left with Newton.
Input
The first line of the input contains a single integer N
The next line contains N space-separated integers, W1, W2,. ., WN

Constraints:
2 ≤ N ≤ 50
1 ≤ Wi ≤ 1000
Output
Print the answer in a single line with decimal values upto 8 digits.
Example
Sample Input 1:
2
2 4

Sample Output 1:
3.00000000

Sample Explanation 1:
(2+4)/2 = 3


Sample Input 2:
3
500 300 200

Sample Output 2:
375.00000000

Sample Explanation 2:
The maximum weight can only be achieved by first combining 300 and 200 to get 250, then combining 250 with 500 to get 375.
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void find_weight(int arr[],int size){
     sort(arr,arr+size);
    double weight = (arr[0]+arr[1]);
    for(int i=2;i<size;i++){
        weight=(weight/2+arr[i]);
    }
    cout<<fixed<<setprecision(8)<<weight/2;
}

int main() {
	// Your code here
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
  find_weight(arr,size);
}