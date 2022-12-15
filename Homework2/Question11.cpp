#include <stdio.h>
#include <stdlib.h>

int main (){
	int num,c=1,result=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for (c=1; c < num; c++){
		if (num %c == 0){
			result+=c;
		}	
	}
	if(result == num){
		printf("%d is perfect number.",num);
		}
	else{
		printf("%d is not perfect number.",num);
	}
	return 0;
}
