// Time Complexity ====> O(log n)

#include<iostream>
using namespace std;


int Binary_S(int arr[],int n,int key){   // Declaration of function for implementing Binary Search

int start=0,end=n;
while(start<=end){
    int mid=(start+end)/2;          // finding mid after each traversal

    if(key==arr[mid]){
        return mid;                 // returning index of element / key 
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
        end=mid-1;
    }
}
return -1;
};

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
    int index = Binary_S(arr,n,key);  // Function call
    if(index>=0){
    cout<<"Element found at index "<<index;
    }
    else{
        cout<<"Element not found !!!!";
    }

}