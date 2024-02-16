//Divide and Conquere
/*
Pseducode:
MERGE-SORT(A,l, r):
    if(l>=r):
        return
    mid = (l+r)/2
    mERGE-SORT(A, l, mid)
    MERSE-SORT(A, mid+1, r)
    MERGE(A, l, mid, r)
    
    MERGE(A, l, mid, r):
    n1 = mid-1+1
    n2 = r-mid
    let t[1...n1+1], t2[a...n2+1] be arrays
    for i = 1 to n1:
        t1[i] = A[l+i-1]
    for i = 1 to n2:
        t2[i] = A[mid+i]
        t1[n1+1] = "infinity"
        t2[n2+1] = "infinity"
        k = 1
        j = 1
    for i = l to r:
        if(t2[j]<=t1[k]):
            A[i]=t[2]j
            ++j
        else 
            A[k] = t1[k]
            ++k

*/

#include<bits/stdc++.h>
using namespace std;


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