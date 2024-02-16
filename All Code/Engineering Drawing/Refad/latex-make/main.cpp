#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outputFile("userData.csv");

    if (!outputFile) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    int numOfUser;
    string name;
    int Weight;

    // Write header to the CSV file
    outputFile << "Name,Weight\n";

    cout << "How many User info you want to take? : ";
    cin >> numOfUser;
    
    for (int i = 0; i < numOfUser; ++i) {
        cout << "Enter name and Weight for entry " << i + 1 << " (e.g., Jeremy Corbyn,521): ";
        cin.ignore(); 
        getline(cin, name, ',');
        cin >> Weight;


        outputFile << name << "," << Weight << "\n";
    }

    outputFile.close();

    cout << "Data generated and saved to userData.csv." << endl;

    return 0;
}
