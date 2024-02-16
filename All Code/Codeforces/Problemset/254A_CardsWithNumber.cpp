#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair <int, int> p1, pair <int , int> p2){
    return p1.second<p2.second;
}
int main(){
    FILE *fptr;
    fptr = fopen("input.txt", "r");
    int n, flag=0;
    fscanf(fptr, "%d", &n);
    vector<pair<int, int> >v;
    for(int i=0; i<2*n; i++){
        int x;
        fscanf(fptr, "%d", &x);
        v.push_back(make_pair(i+1, x));
    }
    fclose(fptr);
    fptr = fopen("output.txt", "w");
    sort(v.begin(), v.end(), myCompare);
    // for(int i=0; i<v.size(); i++)
    //     cout<<v[i].second<<endl;
    for(int i=0; i<2*n; i+=2){
        if(v[i].second!=v[i+1].second){
            flag=1;
            break;
        }
    }
    if(flag==1)
        fprintf(fptr, "-1");
    else{
        for(int i=0; i<2*n; i+=2){
            fprintf(fptr, "%d %d\n", v[i].first, v[i+1].first);
        }
    }
    return 0;
}