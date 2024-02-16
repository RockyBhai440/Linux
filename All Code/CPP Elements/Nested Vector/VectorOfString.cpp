#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector <string> &vec){
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << endl;
    }
}

int main(){
    vector <string> v;
    v.push_back("abcd");
    v.push_back("efgh");
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        v.push_back(s);
    } 
    printVector(v);
    
    return 0;
}