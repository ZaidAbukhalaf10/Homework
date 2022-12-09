#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter any integer number:");
	scanf("%d",&n);
	while (n>=1){
		printf("\n %d",n);
		n--;
	}
	return 0;
}
