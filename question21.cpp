#include <stdio.h>
#include <stdlib.h>

int main() {
	int  n, last;
	printf("Enter a number:");
	scanf("%d",&n);
	last=n%10;
	n=n/10;
	while (n > 10){
		n=n/10;
	}
	printf("first=%d\nlast=%d",n ,last);
	return 0;
}
