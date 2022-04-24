// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	int n;
	// input n
	do{
		printf("Input N: ");
		scanf("%d", &n);
	} while(n<1 || n>15);
	
	double factorial=1;
	for(int i=2; i<=n; i++){
		factorial*=i;
	}
	printf("Factorial %d! = %.0f", n, factorial);
}
