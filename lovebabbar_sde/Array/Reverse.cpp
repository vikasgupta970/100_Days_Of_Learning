// Program to reverse an array

#include<iostream>
using namespace std;

void reverse(int * arr,int start,int end){
    while(start<end){
        int temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        end--;
        start++;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,s-1);
    print(arr,s);

}