/*
Program to find the sum of first n numbers 
Done in 2 ways : 
1.Using Paramter recursion function.
2.Using function only.
*/ 


#include<iostream>
using namespace std;
int sum;

//-------> Using parameter

void fun(int n){
    if(n<1){
        return;
    }
    else{
        sum+=n;
        fun(n-1);
    }
}

void fun2(int i,int sum){
    if(i<1){
        cout<<sum<<"\n";
        return ;
    }
    else{
        fun2(i-1,sum+i);
    }
}



//-------------> Using function

int fun3(int n ){
    if(n==0){
        return 0;
    }
    else{
        return n+fun3(n-1);
    }
}


int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    fun(n);
    cout<<sum<<endl;
    fun2(n,0);
    cout<<fun3(n);
}