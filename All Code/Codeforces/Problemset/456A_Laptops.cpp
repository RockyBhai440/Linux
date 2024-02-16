#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, flag = 0;
    cin >> n;
    vector <pair<int, int> > v(n);
    int arr[n];
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        arr[i] = y;
        v[i] = make_pair(x, y);
    }
    sort(v.begin(), v.end());
    sort(arr, arr+n);
    // for(int i=0; i<n; i++){
    //     cout << v[i].first << '\t' << v[i].second << endl;
    // }
    for(int i=0; i<n; i++){
        if(v[i].second != arr[i]){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;

    return 0;
}

/*
5
2 6
5 9
3 7 
1 5
6 10

p q
1 8
2 6
3 7
5 9
6 10

*/
