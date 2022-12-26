#include<iostream>
#include<string>
int count=1;
using namespace std;
void fun(int i,int n,string s){
    if(i>n){
        return;
    }
    else
    cout<<s<<endl;
    fun(i+1,n,s);
}
int main(){
    int r;
    string v="Vikas";
    cout<<"Enter the number of times u want to print name ";
    cin>>r;
    fun(1,r,v);
}