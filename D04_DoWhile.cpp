// library 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	int n;
	// do while
	do{
		printf("Input Integer [1-10]: ");
		scanf("%d", &n);
	} while(n<1 || n>10);
	
	// display multiplication
	printf("Multiplication Table %d \n", n);
	for(int i=1; i<=10; i++){
		printf("%d * %d = %d \n", i, n, i*n);
	}
}
