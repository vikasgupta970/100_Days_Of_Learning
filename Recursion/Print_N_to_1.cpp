#include<iostream>
using namespace std;

void fun(int i){
    if(i<1){
        return;
    }
    else{
        cout<<i<<"\t";
        fun(i-1);
    }
}

int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    fun(n);
}