// library 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	int row, column;
	// input row
	printf("Input row: ");
	scanf("%d", &row);
	// input column
	printf("Input column: ");
	scanf("%d", &column);
	// 
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			printf(" * ");
		}
		printf("\n");
	}
}
