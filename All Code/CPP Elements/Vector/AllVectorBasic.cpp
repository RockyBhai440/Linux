#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
//vector #1
    vector <int> v;     //only declaration when size is unknown
//cout << v.size() << endl;
    v.push_back(1);     //push_back fucntion is used to input an element in vector at the last position.
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // cout << *(v.data()) << endl;
    // cout << *(v.data()+1) << endl;

    // cout << "v.data(): " << v.data() << endl;
    // cout << "&v[0]: " << &v[0] << endl;

    // cout << "v.data()+1: " << v.data()+1 << endl;
    // cout << "&v[1]: " << &v[1] << endl;

/*    
//Note: The name of an array is a pointer which points the first index of the array.
//  But in vector it works differently. The vector is a object not a pointer. The name of the vector represents 
//  the entire object, not just the address of the first element.
    vector<int> myVector = {10, 20, 30, 40, 50};

    cout << "myVector[0]: " << myVector[0] << endl;
    cout << "*(myVector.data() + 0): " << *(myVector.data() + 0) << endl;

    cout << "myVector.data(): " << myVector.data() << endl;
    cout << "&myVector[0]: " << &myVector[0] << endl;
*/

//If you want to take input in vector "v" using "cin>>v[i]" inside a for loop you have define the 
//  size of the vector like "v(n)". Otherwise you can use push_back() function. If you don't do this 
//  you will get "Segmentation fault (core dumped)" ERROR.

/*
//Vector Traversal type #1: "simple traversal"
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
//Vector Traversal type #2: "using iterator"
    vector <int> :: iterator i;
    for(i=v.begin(); i!=v.end(); i++){
        cout << *i << endl;
    }
//Vector Traversal type #3: "using auto keyword"
    for(auto element:v){
        cout << element<< endl;
    }
*/
    v.pop_back();        //pop_back fucntion is used to remove an element from vector from the last position.

//https://chat.openai.com/c/90c377ea-f11a-46d1-b350-a4466d360325

//vector #2
    vector <int> v2 (3);    //Decalaring a vector with size;
//cout << v2.size() << endl;
    v2.push_back(1);        //In this case 1 will be at the last of v2 vector. Which means at 4th index. 
    v2.push_back(2);        //The upper indexs of vector will contain zero or gurbage value.
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
   
    // for(int i=0; i<v2.size(); i++){
    //     cout << v2[i] << endl;
    // }
    
//vector #3
    vector <int> v3(3, 1);
//cout << v3.size() << endl;
    // for(int i=0; i<v3.size(); i++){
    //     cout << v3[i] << endl;
    //}
    v3.push_back(1);
    v3.push_back(3);
    v3.push_back(5);
    // for(int i=0; i<v3.size(); i++){
    //     cout << v3[i] << endl;
    // }

/*
//Lets swap two vectors v2 and v3.
    swap(v2, v3);
    
    // for(int i=0; i<v2.size(); i++){
    //     cout << v2[i] << endl;
    // }

    // for(int i=0; i<v3.size(); i++){
    //     cout << v3[i] << endl;
    // }
*/

/*
//Lets sort vector v.
    //descending order
    sort(v.rbegin(), v.rend());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    //ascending order
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
//you can also use any comperator as the third argument.
*/

/*
//Lets copy one vectors data to another vector easily.
    vector <int> v4 = v;
    for(int i=0; i<v4.size(); i++){
        cout << v4[i] << endl;
    }
*/

/*
//Lets find the minimum element from a vector.
    int mn = *min_element(v.begin(), v.end());
    cout << mn << endl;
*/

/*
//Lets find the maximum element froma a vector.
    int mx = *max_element(begin(v), end(v));
    cout << mx << endl;
*/


    return 0;
}