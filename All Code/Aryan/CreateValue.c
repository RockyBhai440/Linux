#include<stdio.h>
#include<math.h>
int main(){
	double x=4, y;
	for(int i=0; i<=10; i++){
		y = x+i;
		printf("%lf %f\n", x, y);
	}
	return 0;
}