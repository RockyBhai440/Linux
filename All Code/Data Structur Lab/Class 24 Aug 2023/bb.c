#include<stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        // if(a[i]==2 || a[i]==3)
        //     printf("%d ", a[i]);
        // else{
        //     int flag=0;
        //     for(int j=2; j*j<=n; j++){
        //         if(a[i]<2){
        //             flag=1;;
        //             break;
        //         }
        //         else if(a[i]%j==0){
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if(flag==0)
        //         printf("%d ", a[i]);
        // }
        if(a[i]==2||a[i]==3||a[i]==5||a[i]==7||a[i]==11||a[i]==13||a[i]==17||a[i]==19)
            printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}