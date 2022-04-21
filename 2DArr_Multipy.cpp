#include<iostream>
using namespace std;

int main(){

    int n1, n2, n3, sum;
    cin>>n1>>n2>>n3;

    int a1[n1][n2], a2[n2][n3], arr[n1][n3];
    for (int i=0; i<n1; i++) 
        for (int j=0; j<n2; j++)
            cin>>a1[i][j];

    for (int i=0; i<n2; i++)
        for (int j=0; j<n3; j++)
            cin>>a2[i][j];

    for (int i=0; i<n1; i++)
        for (int j=0; j<n3; j++)
            arr[i][j]=0;

    for (int i=0; i<n1; i++)
        for (int k=0; k<n3; k++)
            for (int j=0; j<n2; j++)    arr[i][k] += a1[i][j]*a2[j][k];

    for (int i=0; i<n1; i++){
        for (int j=0; j<n3; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}