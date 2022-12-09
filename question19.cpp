#include <stdio.h>
#include <stdlib.h>

int main() {
	int product, c=1, n;
	printf("Enter any  number");
	scanf("%d", &n);
	while (c <= 12){
		product = n * c;
		printf("\n%d*%d=%d",n ,c ,product);
		c++;
	}	
	return 0;
}
