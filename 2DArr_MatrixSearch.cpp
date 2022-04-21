#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin>>arr[i][j];

    int k;
    cin>>k;
    int rstart=0, rend=m-1, cstart=0, cend=n-1, i=0;
    if(k<arr[0][0] || k>arr[n-1][m-1]){
        cout<<"Out of range!\n"; exit(0);
    }       //not optimal
    else
        while(rstart<=rend && cstart<=cend){
            for(; rstart<=rend; rstart++)
                if(arr[cstart][rstart]==k){
                    cout<<"Found! at "<<i<<' '<<rstart;
                    exit(0);
                }
            for(; cstart<=cend; cstart++)
                if(arr[cstart][rend]==k){
                    cout<<"Found! at "<<cstart<<' '<<rend;
                    exit(0);
                }
            for(rstart-=1; rstart>=i; rstart--)
                if(arr[cend][rstart]==k){
                    cout<<"Found! at "<<cend<<' '<<rstart;
                    exit(0);
                }
            for(cstart-=1; cstart>i; cstart--)
                if(arr[cstart][rstart+1]==k){
                    cout<<"Found! at "<<cstart<<' '<<rstart+1;
                    exit(0);
                }
            rend--;
            cend--;
            i++;
            rstart=i;
            cstart=i;
        }
    
    cout<<"Not found!"<<endl;

    return 0;
}