#include<iostream>
#include<climits>
using namespace std;

// Always, for CP, use inbuilt sort() function for  sorting

int KadaneAlgo(int arr[], int n){
    int currentSum = 0, maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum<0) currentSum = 0;
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int wrapSum, nonwrapSum;
    nonwrapSum = KadaneAlgo(arr, n);

    int totalSum = 0;
    for(int i = 0; i<n; i++){
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapSum = totalSum + KadaneAlgo(arr, n);
// Finding the subarray which has the max sum (circular)

    cout<<max(wrapSum, nonwrapSum)<<" "<<endl;

    return 0;
}