#include <stdio.h>
#include <stdlib.h>

int main() {
	// cen is centimeter
	float feet, cen;
	printf("Enter the length in feet");
	scanf("%f", &feet);
	cen= feet * 30.48;
	printf("%f",cen);
	return 0;
}
