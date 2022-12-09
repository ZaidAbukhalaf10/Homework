#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float radius, Pi=3.14, area;
	printf("Enter the radius");
	scanf("%f", &radius);
	area=Pi*radius*radius;
	printf("%f",area);
	return 0;
}
