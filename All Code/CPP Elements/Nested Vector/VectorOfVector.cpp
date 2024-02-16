#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;   //This is the size of the outer vector where every ellement will contain a vector.
/*
    //This code will work like array of vector rather vector of vector. Because Here we defined the size 
    //of the vector v in line 14. So when we will try to push back the vector to enter new value in vector in v
    //in line 23 it will create a problem.

    //Style #1:
    vector <vector <int>> v(N);     //We can write this statement using array like: "vector <vector <int>> v[N];"
    for(int i=0; i<v.size(); i++){
        int n;
        cin >> n;
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
        v[i] = v[i];
    }
*/

//Perfect Style. Ease to read and without any problem.
    //Style #2:
    vector <vector <int>> v;
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        vector <int> temp;
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

/*
    //Complex to Read
    //style #3:
    vector <vector <int>> v;
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        v.push_back(vector <int> ());
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
*/

    for(int i=0; i<N; i++){
        cout << v[i].size() << endl;
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}