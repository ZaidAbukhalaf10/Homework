#include <stdio.h>
#include <stdlib.h>

int main (){
	int counter=1,pow=4, base=2, product=base;
	while (counter < pow ){
		product *= base;
		counter++;
	}
	printf("%d",product);
	return 0;
}
