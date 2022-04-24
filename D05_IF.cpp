// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	char ch;
	// input character
	printf("Input some character: ");
	scanf("%c", &ch);
	// if
	if(ch>='0' && ch<='9'){
		printf("%c is a numeric character \n", ch);
	}
	printf("Finish!");
}
