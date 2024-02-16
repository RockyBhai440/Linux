#include<iostream>
using namespace std;

int main(){
    FILE* fptr = fopen("Data.txt", "w+");
    fprintf(fptr, "Name Weight\n");
    cout << "Enter the number of data you want to take input: ";
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string name;
        int weight;
        cin >> name;
        cin >> weight;
        fprintf(fptr,"%s %d\n", name.c_str(), weight);
    }
    return 0;
}