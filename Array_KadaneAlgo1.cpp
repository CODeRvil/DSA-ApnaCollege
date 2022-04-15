#include<iostream>
#include<climits>
using namespace std;

// Always, for CP, use inbuilt sort() function for  sorting

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int currentSum = 0, maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum<0) currentSum = 0;
        maxSum = max(maxSum, currentSum);
    }

// Finding the subarray which has the max sum (non circular)

    cout<<maxSum<<" "<<endl;

    return 0;
}