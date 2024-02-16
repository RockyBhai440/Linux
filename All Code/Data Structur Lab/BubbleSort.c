// Pseducode:-
// BUBBLE-SORT (A):
//     for i= 1 to A.length-1:
//         for j=A.length downto i+1:
//             if A[j]<A[j-1]:
//             swap(A[j], A[j-1]) 

#include<stdio.h>
//can i use *a for multidimensional array??
void bubble_sort(int a[], int n){           //0 1 2 3 4 5 6 7
    for(int i=0; i<n-1; i++){               //loop 1-1  0   8 7 6 5 4 3 2 1 and compare 
        for(int j=n-1; j>=i+1; --j){        //8-7  7-6  6-5  5-4  4-3  3-2  2-1  1-0
            if(a[j]<a[j-1]){                
                int temp=a[j];              //0 1 2 3 4 5 6 7 8
                a[j] = a[j-1];              //5 7 8 9 4 3 1 2 6 
                a[j-1] = temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}