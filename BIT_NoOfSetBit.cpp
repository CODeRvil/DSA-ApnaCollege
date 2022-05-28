#include<bits/stdc++.h>
using namespace std;

#define FORE(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))

// Brian Kernighan’s Algo:

// unsigned int countSetBits(int n)
//     {
//         unsigned int count = 0;
//         while (n) {
//             n &= (n - 1);    n & (n-1) unsets the rightmost bit
//             count++;
//         }
//         return count;
//     }

int main(){
ios_base::sync_with_stdio(false);

    int n; cin>>n;
    // simply get the binary value and check how many digits are 1...
    bitset<4> b(n);
    int flag = 0;
    FOR(i, 0, n) if(b[i]==1) flag++;
    cout<<flag<<'\n';    

return 0;
}