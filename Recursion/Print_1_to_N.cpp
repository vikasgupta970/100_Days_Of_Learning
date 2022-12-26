#include<iostream>
using namespace std;
int count=0;

//-----------> With help of global variable


void print(int n){
    while(count<n){
        cout<<count+1<<"\t";
        count++;
        print(n);
    }

}  


// ----------> //Without help of global variable


void fun(int i,int n){
    if(i>n){
        return;
    }
    else{
        cout<<i<<"\t";
        fun(i+1,n);
    }
}

// ----------> Backtracking 

void fun2(int n){           // recursion in which increment operation is avoided
    if(n<1){
        return ;
    }
    else{
        fun2(n-1);
        cout<<n<<"\t";
    }
}

int main(){
    int n;
    cout<<"Enter the number upto which you want to print ";
    cin>>n;
    cout<<"Using print :-->   ";
    print(n);    //With help of global variable
    cout<<endl<<"Using fun :-->   ";
    fun(1,n);
    cout<<endl<<"Using fun2() :-->   ";
    fun2(n);       //Without help of global variable
}