// library 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	int a=100, b=30;
	// print the division by: integer, remainder and take 2 remainders
	printf(" %d / %d = %d \n", a, b, a/b);
	printf(" %d / %d = %f \n", a, b, (float)a/b);
	printf(" %d / %d = %.2f \n", a, b, (float)a/b);
	// screen stop command
	system("pause");
	
	// 
	char sp1[30]="Coca Cola 30ml";
	char sp2[30]="Raisin Cake";
	char sp3[30]="TV Sonic";
	float dg1=10.99, dg2=150.5, dg3=23.4;
	int sl1=3, sl2=1, sl3=2; 
	int stt=1;
	
	// display bill
	printf("\n Bill List \n");
	printf("--------------------------------------------- \n");
	printf(" ID | Product Name | Price | Quantity | Total \n");
	printf("--------------------------------------------- \n");
	printf(" %2d  | %15s | %9.2f | %2d | %9.2f \n", stt++, sp1, dg1, sl1, dg1*sl1);
	printf(" %2d  | %15s | %9.2f | %2d | %9.2f \n", stt++, sp2, dg2, sl2, dg2*sl2);
	printf(" %2d  | %15s | %9.2f | %2d | %9.2f \n", stt, sp3, dg3, sl3, dg3*sl3);
}
