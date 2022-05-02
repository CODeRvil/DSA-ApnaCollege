#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=20, m=3;

    int *p = &n;

    cout<<p<<endl;
    cout<<&n<<endl;
    cout<<*p<<endl;

    p = &m;

    cout<<p<<endl;
    cout<<*p<<endl;
    // Arrays are almost like pointers

    int arr[] = {10,2,34};
    cout<<*arr<<endl;

    int *ap = arr;
    // Printing an array using arrays

    for(int i =0; i<3; i++){
        cout<<*ap<<" ";
        ap++;
    }
    // OR
    for(int i =0; i<3; i++){
        cout<<*(arr+i)<<" ";    // arrays are const pointers and work as indexing pointers, so can't be incremented
    }

    // Pointer to pointer
    int **q = &p;
    cout<<*q<<endl;
    cout<<**q<<endl;

    // Pointers can be used for Pass br Reference

    return 0;
}