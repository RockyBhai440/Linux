#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

 vector<int>v={1, 2, 3, 4, 5};

//Remind it v.begin() or v.end() functions returns the address of the fast and the last index
//So they returns pointer type value. Its an iterator not any raw pointer.
//So though you don't know the type of pointer so we used auto to detect the data type automatically.

    auto i = v.begin();
    cout << *i << endl;
    i = v.end();
    cout << *(i-1) << endl;
    
    return 0;
}