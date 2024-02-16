/*
    A program to replace all the numbers position with (o based index) by increment order.
    like you have to replace {10, 16, 7, 14, 5, 3, 12, 9} with {4, 7, 2, 6, 1, 0, 5, 3}
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
The myCompare function is a comparator function that is used as an argument in the std::sort function 
to sort a vector of pairs. This function defines the ordering of the pairs based on their first elements 
in an ascending order.
*/
//Comperator
bool myCompare(pair <int, int> p1, pair <int , int> p2){
    return p1.first<p2.first;
    // if (p1.first < p2.first) return true;
    // else if (p1.first == p2.first && p1.second < p2.second) return true;
    // else return false;
}

int main(){
    vector <int> v = {10, 16, 7, 14, 5, 3, 12, 9};
    vector < pair <int, int>> p;
    for(int i=0; i<v.size(); i++){
//Take input pairs in vector.    
        // pair <int, int> q;
        // q.first = v[i];
        // q.second = i;
        // p.push_back(q);

        p.push_back(make_pair(v[i], i));
        //p.push_back(make_pair(i, v[i]));  //output will be changed
    }

    sort(p.begin(), p.end(), myCompare);

    for(int i=0; i<v.size(); i++){
        v[p[i].second] = i;
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}