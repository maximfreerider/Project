#include "stdio.h"
#include "conio.h"
#include "math.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,h,d,result;
	printf("introduction \n");
	scanf_s("%lf",&a);
	printf("the end of work\n");
	scanf_s("%lf",&b);
	printf("write step\n");
	scanf_s("%lf",&h);
	printf("write pohubka\n");
	scanf_s("%lf",&d);
	
	
	double x,sum;
	int k;
	for (x=a; x >= a && x <=b;x +=h) {
		k=1;
		sum = 0;
		
		do{
			result = pow(-1,k)*x/(k*(k+1))*sin(2*k+1);
			sum += result;
			k++;
		}
		while (fabs(result) > d);
		printf("x = %lf sum = %1 result = %lf\n",x,sum ,result);
	}
	_getch();  
	return 0;
}