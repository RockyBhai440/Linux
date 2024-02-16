#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include<algorithm>

int main() {
    ll a, b, c,result;
    cin >> a >> b >> c;
    ll max1 = a+b+c;
    ll max2 = a*b*c;
    ll max3 = (a+b)*c;
    ll max4 = a*(b+c);
    cout << max(max(max1, max2), max(max3, max4)) << endl;
}