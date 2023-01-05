/*
Christmas Gift or New Year Gift
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton is very popular and got a lot of gifts in the end of year 1722.

He received a total of 2,000,001 gifts. He placed them on a number line such that the coordinates of the gifts are -1000000, -999999, -999998, ... 999998, 999999, 1000000.

Among these gifts, some K consecutive gifts are Christmas gifts and rest are New Year gifts.

Additionally, Newton knows that the gift at the X-th coordinate is a Christmas gift

Print all the coordinates that may contain a Christmas gift.
Input
The first and the only line of the input contains 2 integers, K and X

Constraints:

    1 ≤ K ≤ 100
    0 ≤ X ≤ 100

Output
Output the answer in a single line
Example
Sample Input 1:
4 7

Sample Output 1
4 5 6 7 8 9 10

Sample Explanation 1:
We know that there are 4 Christmas Gifts and also that the Gift at 7 coordinate is also a Christmas Gift.

So the possible cases are:
1) Gifts at coordinates 4, 5, 6, and 7 are Christmas Gifts
2) Gifts at coordinates 5, 6, 7, and 8 are Christmas Gifts
3) Gifts at coordinates 6, 7, 8, and 9 are Christmas Gifts
4) Gifts at coordinates 7, 8, 9, and 10 are Christmas Gifts


Sample Input 2:
3 0

Sample Output 2:
-2 -1 0 1 2
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
int k,m;
cin>>k>>m;
   set <int> s2;
 

    for(int i=m;i>(m-k);i--) // left
    {
        s2.insert(i);
    }

    for(int i=m;i<(m+k);i++) // right
    {
        s2.insert(i);
    }
    
    for(auto i=s2.begin();i!=s2.end();i++){
    cout<<*i<<endl;
    }
}