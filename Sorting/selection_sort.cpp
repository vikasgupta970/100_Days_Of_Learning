/*
-> Time complexity in Worst Case is ----> O(N^2)
-> More efficiant then Bubble Sort 
-> It swaps element 'n' times in worst case while Bubble sort swaps n*(n-1) times
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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted Array : ";
    for(int i:arr){
        cout<<i<<"  ";
    }

}