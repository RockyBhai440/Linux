#include<stdio.h>
#include"header.h"

void CreateValue(){
    int x1 = 1, x2 = 2;
    FILE* fp = fopen("Data.txt", "w+");
    fprintf(fp, "X\tY\n");
    for(int i=1; i<=5; i++){
        fprintf(fp, "%d\t%d\n", x1, i);
        fprintf(fp, "%d\t%d\n", x2, i);
        x1 += 2;
        x2 += 2;
    }
}