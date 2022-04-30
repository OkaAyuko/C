// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	int year;
	printf("Input year: ");
	scanf("%d", &year);
	
	if(year%100==0){
		if(year%400==0){
			printf("This is the leap year of the century");
		} else {
			printf("This is the five centuries");
		}
	} else {
		if(year%4==0){
			printf("This is the leap year");
		} else {
			printf("This is the normal year");
		}
	}
}
