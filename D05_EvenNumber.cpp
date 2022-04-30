// library 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	// 1.
	for(int i=0; i<=20; i+=2){
		printf("%4d", i);
	}
	printf("\n");
	// 2.
	for(int i=0; i<=20; i++){
		if(i%2!=1){
			printf("%4d", i);
		}
	}
	printf("\n");
	// 3. 
	for(int i=0; i<=10; i++){
		printf("%4d", i*2);
	}
	printf("\n");
	// 4. *using while 
	int n=0;
	while(n<=20){
		printf("%4d", n);
		n+=2;
	}
}
