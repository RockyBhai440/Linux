//Pair is class in cpp stl which stores two values.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
/*
structure:    
    pair <data_type, data_type> varibale_name
*/
{
/*
    pair <int, string> p;

//type #1:
    //initializaion of pair:
    p = make_pair(1, "Pranto");     //Here "make_pair(_,_) is an internal function."
    //get output:
    cout << p.first << " " << p.second << endl;
//type #2:
    //initializaion of pair:
    p = {1, "Pranto"};
    //get output:
    cout << p.first << " " << p.second << endl;
*/
}
{
/*
//Taking input
    pair <int, int> q;
    cin >> q.first >> q.second;
    cout << q.first << " " << q.second << endl;
*/
}
{
    //Copy pair:
        // pair <int, string> r;
        // cin >> r.first >> r.second;

    /*
        //Copy by Data:
        pair <int, string> copy = r;

        // cout << &r << endl;
        // cout << &copy << endl;

        cout << copy.first << " " << copy.second << endl;

        r.first = 00;
        r.second = "None";
        cout << r.first << " " << r.second << endl;
        cout << copy.first << " " << copy.second << endl;
    */

    /*
        //Copy by reference:
        pair <int, string> &copy = r;

        // cout << &r << endl;
        // cout << &copy << endl;

        cout << copy.first << " " << copy.second << endl;
        r.first = 0;
        r.second = "None";
        cout << copy.first << " " << copy.second << endl;
        copy.first = 5;
        copy.second = "Rakhal";
        cout << r.first << " " << r.second << endl;
    */
}
{
    /*
    //Swap pair:
    vector <int> v1 = {1, 2, 3};
    vector <int> v2 = {2, 3, 4};
    vector <pair <int, int>> v(3);
    for(int i=0; i<v1.size(); i++){
        v[i] = {v1[i], v2[i]};
    }
    for(int i=0; i<v1.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    swap(v[0], v[2]);
    for(int i=0; i<v1.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    */
}

    return 0;
}