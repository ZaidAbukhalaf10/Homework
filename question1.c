#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number1, number2, sum;
	printf("Enter two numbers");
	scanf("%d%d", &number1, &number2);
	sum=number1+number2;
	printf("%d", sum);
	return 0;
}
