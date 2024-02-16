//Thouth we use for loop while input in array does its notation os O(n).
/*
Pseducode
INSERTION-SORT(A):
    for j = 2 to A.length:
        Key = A[J]
        i = A[j]
        i = j-1
        while A[i]>Key and i>0:
            swqp(A[i], A[i+1])
            --i
            swap(A[j+1], A[j])
*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int *a, int n){
    int i, j;
    for(j=1; j<n; j++){
        int key = a[j];
        i = j-1;
        while(a[i]>key && i>=0){
            // swap(a[i], a[i+1]);
            a[i+1]=a[i];
//swap(&a[i], &a[i+1]);             in C programing
            --i;
        }
        // swap(a[i+1], key);
        a[i+1] = key;
// swap(&a[i+1], &a[j]);              in C programing
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}