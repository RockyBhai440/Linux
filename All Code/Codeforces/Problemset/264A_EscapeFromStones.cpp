#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();

    // double l=0, u=1;
    // vector <pair<double, int> > v(n);
    // for(int i=0; i<n; i++){
    //     int x = i+1;
    //     double m = (double)(l+u)/2.0;
    //     double value = double(m*100000);
    //     v[i] = make_pair(value, x);
    //     if(s[i]=='l'){
    //         l = l;
    //         u = m;
    //     }
    //     else{
    //         l = m;
    //         u = u;
    //     }
    // }
    // sort(v.begin(), v.end());
    // for(int i=0; i<n; i++){
    //     cout << v[i].first << "\t" << v[i].second << endl;
    // }

    vector <int> v1;
    vector <int> v2;
    for(int i=0, j=i+1; i<n; i++, j++){
        if(s[i]=='l')
            v1.push_back(j);
        else
            v2.push_back(j);
    }
    int n1 = v1.size();
    int n2 = v2.size();
    for(int i=0; i<n2; i++)
        cout << v2[i] << '\n';
    for(int i=n1-1; i>=0; i--)
        cout << v1[i] << '\n';
    return 0;
}