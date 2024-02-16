#include<stdio.h>
int max(int a[], int size){
    if(size==0)
        return a[size];
    if()
        
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int Max = max(arr, n);
    printf("%d\n", Max);
    return 0;
}