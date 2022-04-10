#include<iostream>
using namespace std;

// int BinarySearch(int n, int arr[], int key){
//     int start = 0;
//     re: int end = n-1, mid = (start + end)/2;
//     if(start==end) return mid;
//     else if(arr[mid]==key) return mid;
//     else if(arr[mid]>key) BinarySearch(mid, arr, key);
//     else {start = mid + 1; goto re;}

//     return -1;
// }                    BigO(log n) regards time complexity

int BinarySearch(int n, int arr[], int key){
    int start = 0, end = n;
    while(start<=end){
        int mid = (start+end)/2;
        
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) end = mid - 1;
        else start = mid + 1;
    }

    return -1;
}               //BigO(log n) regards time complexity, but better in space complexity

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int key;
    cin>>key;

    cout<<BinarySearch(n, arr, key)<<endl; 

    return 0;
}