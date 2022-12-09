#include <stdio.h>
#include <stdlib.h>

int main() {
	// d is the divisible number  
	int Low, High, d;
	printf("Enter the Low number");
	printf("Enter the High number");
	printf("Enter the divisible number");
	scanf("%d", &Low);
	scanf("%d", &High);
	scanf("%d", &d);
	int N = Low;
		while (N <= High){
	
			if (N % d==0){
				printf("%d\n", N);
				N++;	
			}	
		N++;	
		}
	return 0;
}
