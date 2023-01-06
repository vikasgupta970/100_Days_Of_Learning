

//  Question ----->  https://www.hackerrank.com/contests/coding-blitz/challenges/duplicate-in-array-3



#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,size;
    unordered_set<int> arr;
    vector<int> d;
    cin>>t;
        for(int i=0;i<t;i++){
            cin>>size;
            for(int j=0;j<size;j++){
                int m;
                cin>>m;
                if(arr.find(m)!=arr.end()){
                    d.push_back(m);
                }
                else{
                    arr.insert(m);
                }
        }
        arr.clear();
    }
    for(auto i=d.begin();i!=d.end();i++){
        cout<<*i<<"\n";
    }
}