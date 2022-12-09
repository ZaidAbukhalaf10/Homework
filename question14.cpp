#include <stdio.h>
#include <stdlib.h>

int main() {
	//f is factorial
	// c is the counter
	int n, c=1, f=1;
	printf("Enter any integer number");
	scanf("%d",&n);
	while (c != n) {
		f*=c;
		c++;
	}
	f*=c;
	printf("%d",f);
	return 0;
}
