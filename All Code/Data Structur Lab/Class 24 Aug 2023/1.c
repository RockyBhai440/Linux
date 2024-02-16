#include<stdio.h>
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    c = (b*b-4*a*c) / 2*a;
    printf("%f\n", c);
    return 0;
}