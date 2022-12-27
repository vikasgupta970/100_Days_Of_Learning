// Program to find maximum and min element in array

#include<iostream>
using namespace std;

void find_max_min(int arr[],int s){
   int max=arr[0];
   int min=arr[0];
    for(int i=1;i<s;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Maximum element is : "<<max<<"  Minimum element is : "<<min;
}

int main(){
    int arr[]={12,56,23,7,124,876,456};
    int s=sizeof(arr)/sizeof(arr[0]);
    find_max_min(arr,s);
}