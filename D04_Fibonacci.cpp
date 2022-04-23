// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	// Fibonacci 
	// create variable name "n"
	int n;
	// use do while()
	// this statement allows to execute then to check the input element
	do{
		printf("Input the number of elements [3-20]: ");
		scanf("%d", &n);
	} while(n<3 || n>20);
	
	int a, b, c; // hypothesis a=f(n-2). b=f(n-1) va c=f(n)
	a=b=1; // a and b start with 1
	printf("\n Fibonacci %d-element: \n", n);
	printf("%d, %d, ", a, b);
	for(int i=2; i<n; i++) {
		c =a+b;               // f(n) = f(n-2) + f(n-1)
		printf("%d, ", c);	  // display c
		a=b;                  // f(n-2) = f(n-1)
		b=c;                  // f(n-1) = f(n)
	}
}
