// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// int main()
int main(){
	int result;
	
	//do{
	//	printf("Input your result [0-100]:");
	//	scanf("%d", &result);
	//} while(result<=0 || result>=100);
	
	printf("Input your result [0-100]:");
	scanf("%d", &result);
	
	if(result< 0|| result>100){
		printf("Invalid result");
	} else if(result>=80){
		printf("Type: Excellent");
	} else if(result>=70){
		printf("Type: Good");
	} else if(result>=60){
		printf("Type: Quite");
	} else if (result>=40){
		printf("Type: Medium");
	} else {
		printf("Notice: you did not meet the requirements");
	}
}
