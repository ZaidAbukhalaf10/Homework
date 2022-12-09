#include <stdio.h>
#include <stdlib.h>

int main() {
	int  n, first, place=1, mid,c;
	printf("Enter a number:");
	scanf("%d",&n);
	first=n%10;
	n=n/10;
	// number is stored in c variable 
	c=n;
	while (n > 10){
		place*=10;
		n=n/10;
	}
	mid= c%place;
	n= (first*place+mid)*10+n;
	printf("%d",n);
	return 0;
}
