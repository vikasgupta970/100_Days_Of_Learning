#include<bits/stdc++.h>
using namespace std;

int main() {
int N,k,count=0;
cin>>N>>k;
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        int l=0;
         while((i+j)%k==0 && (j+l)%k==0 && (l+i)%k==0)
            { 
                count++;
                cout<<i<<" "<<j<<" "<<l<<endl;
                l++;
            }
    }
}
cout<<count;
}
