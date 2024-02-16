#include <iostream>
#include <vector>
using namespace std;

// User-defined function to print the elements of a vector
//call by reference
void printVector(vector<int> &vec) {
 vec.push_back(60);
    vec.push_back(70);
    for (int element : vec) {
        cout << element << " ";
    }
    cout << endl;
}
//Call by value
void printVector2(vector<int> vec) {
 vec.push_back(600);
    vec.push_back(700);
    for (int element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    vector<int> myVector = {10, 20, 30, 40, 50};
    vector<int> myVector2 = {100, 200, 300, 400, 500};

    // Calling the user-defined function and passing the vector as an argument
    printVector(myVector);
    for (int element : myVector) {
        cout << element << " ";
    }
    cout << endl;
   
    printVector2(myVector2);
    for (int element : myVector2) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}