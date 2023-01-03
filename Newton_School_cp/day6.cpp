/*
Newton got the job!!!
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Newton lost his previous job due to recession and now he is actively looking for new jobs.

He applied to N different companies and to his surprise he got accepted for each and every job to which he applied!. Since he is multi- talented, he is thinking of doing one job per day and then switching to another job.

Since Christmas is also coming and is only M days away, he wants to maximize his earning before Christmas.

Each job is defined by two arrays, Ai and Bi for each job i from 1 to N.

Each job takes 1 day to complete and Newton can only do 1 job per day. If Newton chooses to take the i- th job, then he will get his salary Bi after Ai days.

Find the maximum money that Newton can earn on and before Christmas.
Input
The first line contains 2 integers N and M
The next N lines contains 2 integers each, Ai and Bi

Constraints:
1 ≤ N ≤ 2 x 105
1 ≤ M ≤ 2 x 105
1 ≤ Ai ≤ 2 x 105
1 ≤ Bi ≤ 2 x 104
Output
Output the answer
Example
Sample Input 1:
3 4
4 3
4 1
2 2

Sample Output 1:
5

Sample Explanation 1:
Newton can earn 5 dollars as follows:
1) Take the first job. He will receive 4 dollars after 3 days
2) Next day, take third job. He will receive 2 dollars after 2 days from the second day, i. e. 3 days from the beginning.


Sample Input 2:
5 3
1 2
1 3
1 4
2 1
2 3

Sample Output 2:
10
*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
static bool cmp(vector<int>&a,vector<int>&b){
    if(a[1]==b[1]){
        return a[0]<b[0];
    }
    return a[1]>b[1];
}
int main() {
    int m,n;
    vector<vector<int>> res;
    cin>>n>>m;
    while(n--)
    {int a,b;
        cin>>a>>b;
        res.push_back({a,b});
    }
    set<int>st;
    for(int i=0;i<m;i++){
        st.insert(i);
    }
    sort(res.begin(),res.end(),cmp);
    int ans=0;
    for(int i=0;i<res.size();i++){
        if(res[i][0]<=m){
            int tar=m-res[i][0];
            auto it=st.upper_bound(tar);
            if(it!=st.begin()){
                it=prev(it);
                st.erase(it);
                ans+=res[i][1];
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}