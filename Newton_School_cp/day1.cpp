/*  Problem : 
Newton got a string as a gift on Christmas.

Newton likes palindromes so he decides to make this string into a palindrome.

He can kick the string and after every kick he can change any one of its character to any other character of his choice.

Find the minimum number of times that Newton has to kick the string.
Input
The first and the only line of the input contains a single string S

Constraints:


    1 ≤ |S| ≤ 1000

    All characters in S are in lowercase and are English letters

Output
Output the answer
Example
Sample Input 1:
newton

Sample Output 1:
2

Sample Explanation 1:
In the first kick, Newton changes the 2nd character to 'o'
In the second kick, Newton changes the 4th character to 'w'.
Thus, the final word is "nowwon" which is a palindrome.


Sample Input 2:
abbcbba

Sample Output 2:
0
*/

#include<iostream>
#include<string>
using namespace std;

int pallindrome(string s,int l){
    int count=0;
    for(int i=0;i<l/2;i++){
        if(s[i]!=s[l-i-1]){
            count++;
        }
    }
    return count;
}

int main(){
    string s="newton";
    int len=s.length();
    if(len<1 || len>1000){
        return 0;
    }
    else{
    cout<<pallindrome(s,len);
    }
}