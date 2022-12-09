#include <stdio.h>
#include <stdlib.h>

int main() {
	  
	int A, B, C;
	printf("Enter any three integer numbers");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	if (A > B){
		
	 	if (A > C)
			printf("A is the largest");
		else 
			printf("C is the largest");
		}
	else if (B > C)
		printf("B is the largest");
		
	else 
		printf("C is the largest");
		
	return 0;
}
