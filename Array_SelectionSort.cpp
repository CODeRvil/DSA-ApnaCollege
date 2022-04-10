#include<iostream>
using namespace std;

// Always, for CP, use inbuilt sort() function for  sorting

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

// Sorted in Increasing Order

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}