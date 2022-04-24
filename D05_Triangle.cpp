// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	int row;
	// input row
	printf("Input row: ");
	scanf("%d", &row);
	//
	for(int i=0; i<row; i++) {
		for(int j=0; j<=i; j++) {
			printf(" * ");
		}
		printf("\n");
	}
	printf("\n\n");
	//
	for(int i=row; i>=0; i--) {
		// j = 8
		for(int j=0; j<=i; j++) {
			printf(" * ");
		}
		printf("\n");
	}

}
