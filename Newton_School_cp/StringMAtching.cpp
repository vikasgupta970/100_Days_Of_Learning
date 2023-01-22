#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
int count;
cin>>s>>t;
for(int i=0;i<s.length();i++){
    if(s[i]!=t[i]){
        char temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
        count++;
    }
}
if(s==t && (count==1 || count==0)){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}