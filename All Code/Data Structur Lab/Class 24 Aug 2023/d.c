#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        scanf("%d", &a[0]);
        int max = a[0];
        int b[100], c[100];
        for(int i=1; i<n; i++){
            scanf("%d", &a[i]);
            if(a[i]>max)
                max = a[i];
        }

        
    }
    return 0;
}