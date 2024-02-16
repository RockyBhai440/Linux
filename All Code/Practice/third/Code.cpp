#include<iostream>
using namespace std;

int main(){
    FILE* fptr = fopen("Data.csv", "w+");
    fprintf(fptr,"age,height\n");
    cout << "Enter the number of data you want to enter: ";
    int n;
    cin >> n;
    cout << "Enter your age and height: " << endl;
    for(int i=0; i<n; i++){
        float age, height;
        cin >> age >> height;
        fprintf(fptr,"%f,%f\n", age, height);
    }
    return 0;
}