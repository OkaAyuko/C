// library 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// main()
int main(){
	// create variable char containing 30 characters and int
	char Name[30];
	int Age;
	
	// input name
	printf("Input your name: ");
	scanf("%[^\n]", Name); // %[^]
	
	_flushall(); // command to delete the [enter] code on the keyboard set
	
	// input age
	printf("Input your age: ");
	scanf("%d", &Age);
	
	// display name and age
	printf("--------------------------------\n");
	printf("Hello %s ! \n", Name);
	printf("This year you are %d years old ? \n", Age);
}
