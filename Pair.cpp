#include<bits/stdc++.h>
using namespace std;

#define FORE(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))

bool myComparater(pair<int, int> p1, pair<int, int> p2){
    return(p1.first<p2.first);
}

int main(){
    ios_base::sync_with_stdio(false);

    // STL Container
    pair <int, char> p;
    p.first = 3;
    p.second = 'f';
    // make_pair(a, b); -> this function can be used to make a pair, while
    // letting the compiler decide the data types of the passed values (variables)

    // QUESTION:
    
    // Reduce an array - replace the values with whole numbers (in increasing order) at their indexes 
    int n; cin>>n;
    int arr[n];
    FOR(i, 0, n) cin>>arr[i];

    vector <pair<int, int>> v;
    FOR(i, 0, n) v.push_back(make_pair(arr[i], i));
    
    sort(v.begin(), v.end(), myComparater); // the comparater are used to decied how sorting will happen
    FOR(i, 0, v.size()) arr[v[i].second] = i;
    FOR(i, 0, v.size()) cout<<arr[i]<<' ';

    cout<<'\n';

    FOR(i, 0, v.size()) cout<<v[i].first<<':'<<v[i].second<<' '; // to print the vector of pair
    
    return 0;
}