#include<bits/stdc++.h>
using namespace std;

#define FORE(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))

int main(){
    ios_base::sync_with_stdio(false);

    vector<int> v;
    v.push_back(5); //adds a value in the vector
    v.push_back(1);
    v.push_back(2);

    // to print a vector using normal for loop
    FOR(i, 0, v.size()) cout<<v[i]<<' ';
    cout<<'\n';

    // to print a vector using an iterator
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++) cout<<*it<<' ';
    cout<<'\n';

    // to print a vector using auto
    for(auto element:v) cout<<element<<' ';
    cout<<'\n';

    v.pop_back(); // removes the last element from the vector

    vector<int> v2 (3, 20); // initialize a vector while specifying (size, value of elements)

    // Swaping results in data loss when the size of the vectors are different

    swap(v, v2); // function can be used for any variable
    for(auto element:v) cout<<element<<' ';
    cout<<'\n';
    for(auto element:v2) cout<<element<<' ';
    cout<<'\n';

    v.swap(v2); // faster in vectors as can only be used for vectors
    for(auto element:v) cout<<element<<' ';
    cout<<'\n';
    for(auto element:v2) cout<<element<<' ';
    cout<<'\n';

    sort(v.begin(), v.end());
    for(auto element:v) cout<<element<<' ';
    cout<<'\n';

    return 0;
}