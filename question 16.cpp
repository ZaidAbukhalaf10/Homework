#include <stdio.h>
#include <stdlib.h>

int main() {
	int even=1000, sum=0;
	while (even != 2000){
		printf("\n%d", even);
		sum+=even;
		even+=2;
	}
	printf("\n%d\nTotal sum=%d",even,sum);
	return 0;
}
