#include<iostream>
using namespace std;

// Always, for CP, use inbuilt sort() function for  sorting

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int flag = 1;
    while(flag<n){
        for(int i=0; i<n-flag; i++)
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        flag++;
    }

// Sorted in Increasing Order

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}