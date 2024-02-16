#include<bits/stdc++.h>
#include<cctype>
using namespace std;

int main(){
    string s;
    cin >> s;
    int flag = 0;
    for(int i=1; s[i]!='\0'; i++){
        if(s[i]!=toupper(s[i])){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << s << endl;
    else{
        if(isupper(s[0]))   s[0] = tolower(s[0]);
        else                s[0] = toupper(s[0]);
        for(int i=1; s[i]!='\0'; i++){
            if(isupper(s[i]))   s[i] = tolower(s[i]);
            else                s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }
    return 0;
}