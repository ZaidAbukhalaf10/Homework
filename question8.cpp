#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int Low, High, sum=0;
	printf("Enter the Low number");
	printf("Enter the High number");
	scanf("%d", &Low);
	scanf("%d", &High);
	int N=Low;
	while (N <= High)
		{
		sum= sum + N;
		N++; 	
		}
	printf("%d \n", sum);

	return 0;
}
