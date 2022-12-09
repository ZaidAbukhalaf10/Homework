#include <stdio.h>
#include <stdlib.h>

int main() {
	int c=1, sum=0, product=1;
	while (c <= 10){  
		int n;
		printf("Enter any 10 number:");
		scanf("%d",&n);
		sum +=n;
		product*=n;
		c++;
	}
	
	printf("sum=%d",sum);
	printf("\n product=%d",product);
	return 0;
}
