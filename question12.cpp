#include <stdio.h>
#include <stdlib.h>

int main() {
	int low, high, step;
	printf("Enter the low, high and the steps");
	scanf("%d%d%d",&low,&high,&step);
	int n=low, c=0;
	while (n < high){
		printf("\n %d",n);
		n+=step;
		c++;
	}
	printf("\n counter:%d", c);
	return 0;
}
