// library 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// int main()
int main(){
	// check prime number
	int n;
	do{
		printf("Input integer: ");
		scanf("%d",&n);
	} while(n<=2);
	
	int integer=1;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			printf("%d is the composite number \n", n);
			integer=0;
			break;
			// end for 
		} 
		if(integer==1){
			printf("%d is the integer number \n", n);
		} else {
			printf("%d is the composite number \n", n);
		}
	}
}
