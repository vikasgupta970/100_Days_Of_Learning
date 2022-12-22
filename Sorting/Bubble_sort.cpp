/*
-> Time complexity in Worst Case is ----> O(N^2) 
-> It swaps element n*(n-1) times

-> n-1 iteration required to sort an array of size n
-> every iteration traverse n-i , where i is no of iteration
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
    int counter = 1;
    while(counter <= n-1){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
cout<<"Sorted Array : ";
    for(int i:arr){
        cout<<i<<"  ";
    }

}
