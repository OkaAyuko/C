// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// main()
int main(){
	printf("Hello !!! \n");
	// declare a character string containing email address, variable name is email
	char email[80]="fpt-aptech@gmail.edu.vn";
	int age = 21;
	printf("Email: %s \nAge: %d \n", email, age);
	
	// ASCII
	char ch = 'A';
	printf("Characters: %c \n", ch);
	printf("ASCII: %d, %x, %o \n", ch, ch, ch);
}
