#include <stdio.h>
#include <stdlib.h>

int main (){
	int counter=1, sum=0;
	while (counter <= 50){
		sum += counter;
		counter++;
	}
	printf("sum of the first 50 natural numbers:%d",sum);
	return 0;
}
