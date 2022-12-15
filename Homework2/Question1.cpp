#include <stdio.h>
#include <stdlib.h>

int main (){
	// l is	Length
	// w Width
	float l,w, area, perimeter;
	printf("Enter the length and the width of the rectangle:");
	scanf("%f%f", &l,&w);
	area = l * w;
	perimeter  = 2 *(l+w);
	printf("Area=%f\nperimeter=%f", area,perimeter);
	
	return 0;
}
