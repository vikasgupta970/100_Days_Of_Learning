// Time complexity ===> O(N)


#include<iostream>
using namespace std;

int linear_s(int arr[],int n,int key){  // Function for linear search 
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        else{
            return -1;
        }
    }
}


int main(){
    int n,key;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to find ";
    cin>>key;
    int index = linear_s(arr,n,key);  // Function call
    if(index>=0){
    cout<<"Element found at index "<<index;
    }
    else{
        cout<<"Element not found !!!!";
    }
}
