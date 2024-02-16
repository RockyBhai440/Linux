#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    int max=a[0], min=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    float avg = (float)(sum/n);
    printf("max = %d\nmin = %d\navg = %.2f\n", max, min, avg);
    return 0;
}