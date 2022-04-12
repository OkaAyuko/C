// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

// main()
int main(){
	int a = 10;
	
	// printf b with a++ 
	int b = a++;
	printf("b = %d, a = %d \n", b, a); 
	// b = 10 | a = 11 (the original value of a is returned first [b = 10], then a is incremented by 1)
	
	// printf c with ++a;
	int c = ++a;
	printf("c = %d, a = %d \n", c, a); 
	// a = 11 (taken from the result a above) -> c = 12 | a = 12 (value increased by 1 then it returns the value)
}
