// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	char ce;
	int subsidize;
	printf("Input coefficient with [a/b/c]: ");
	scanf("%c", &ce);
	// switch case
	switch(ce) {
		case 'a':
		case'A':
			subsidize = 100;
			break;
		case 'b':
		case 'B':
			subsidize = 500;
			break;
		case 'c':
		case 'C':
			subsidize = 800;
			break;
		default :
			subsidize = 0;
			break;
	}
	// display
	printf("Coefficient [%c] have subsidize is: %d \n", ce, subsidize);
}
