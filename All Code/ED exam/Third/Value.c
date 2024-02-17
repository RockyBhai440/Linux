#include<stdio.h>
#include<math.h>

int main(){
    FILE* fptr = fopen("Data.csv", "w+");
    fprintf(fptr, "X,Y\n");
    for(int i=1; i<=100; i++){
        float j = (float)log(i);
        fprintf(fptr, "%0.3f,%0.3f\n", (float)i, j);
    }
    return 0;
}