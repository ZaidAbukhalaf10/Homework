#include <stdio.h>
#include <stdlib.h>

int main() {
	// F is fahrenheit
	// C is celsius
	float F,C;
	printf("Enter the temperature in fahrenheit ");
	scanf("%f", &F);
	C=(F-32)*5/9;
	printf("%f", C);
	return 0;
}
