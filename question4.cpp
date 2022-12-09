#include <stdio.h>
#include <stdlib.h>

int main() {
	// temp is the temperature
	int temp;
	printf("Enter the temperature");
	scanf("%d", &temp);
	if (temp == 0)
		printf("Temperature is at freezing point");	
		if (temp >= 1)
			printf("Temperature is above");
		if (temp <= -1)	
			printf("Temperature is below");
	
	return 0;
}
