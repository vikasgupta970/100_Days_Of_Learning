/*
-> Time complexity O(N^2) , O(N) if already sorted
-> Most efficient for small array and in comparison of bubble,selection sort
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
cout<<"Sorted array : ";
    for(int i:arr){
        cout<<i<<"  ";
    }

}