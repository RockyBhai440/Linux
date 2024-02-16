/*
Implement max() where max will take an array as input and return max
*/

#include<stdio.h>
int max(int a[], int size){
    int Mx = a[0];
    for(int i=1; i<size; i++){
        if(a[i]>Mx)
            Mx = a[i];
    }
    return Mx;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", max(arr, n));
    return 0;
}