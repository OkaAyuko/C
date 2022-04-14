// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// main()
int main(){
	int n;
	// input number 
	printf("Enter The Integer N: ");
	scanf("%d", &n);
	
	printf(">>> %d Multiplication Table <<< \n", n);
	// for loop
	// int i starts from 1 | print up to i <= 10 | i++ is that after the execution is done, it will increase 1
	for(int i=1; i<=10; i++){
		printf("%d * %d = %d \n", i, n, i*n);
	}
}
