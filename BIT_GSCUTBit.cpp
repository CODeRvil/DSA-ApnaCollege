#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return((n & (1 << pos)) != 0);
}

int setBit(int n, int pos){ // sets the position with 1; 0 - 1, 1 - 1
    return(n | (1 << pos));
}

int clearBit(int n, int pos){
    return((n & ~(1<<pos)));
}

int updateBit(int n, int pos, int value){ // 0 - 0, 1 - 0 -- basically clearBit use karo
    return((n & ~(1<<pos)) | (value<<pos));
}

int toggleBit(int n, int pos){ // basically 0 - 1, 1 - 0
    return(n xor (1<<pos));
}

int main(){

    cout<<getBit(5,1)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,2,1)<<endl;
    cout<<toggleBit(5,2)<<endl;

    // Number of leading zeroes: __builtin_clz(x)
    // Number of trailing zeroes: __builtin_ctz(x)
    // Number of 1-bits: __builtin_popcount(x)
    // Binary to Decimal => int num = 0b<number>;
    return 0;
}