#include<iostream>
#include<climits>
using namespace std;

// Always, for CP, use inbuilt sort() function for  sorting

bool pairSum(int arr[], int n, int k){
    int low = 0, high = n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k) high--;
        else low++;
    }
    return false;
}

int main(){

    int n, k = 31;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
// array should be sorted
    cout<<pairSum(arr, n, k)<<endl;

    return 0;
}