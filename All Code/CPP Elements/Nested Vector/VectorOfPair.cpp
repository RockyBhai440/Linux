#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    vector <int> v1 = {1, 2, 3};
    vector <int> v2 = {2, 3, 4};
    vector <pair <int, int>> v(3);
    for(int i=0; i<v1.size(); i++){
        // v[i] = {v1[i], v2[i]};
        v[i] = make_pair(v1[i], v2[i]);
    }
    for(int i=0; i<v1.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    swap(v[0], v[2]);
    for(int i=0; i<v1.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}