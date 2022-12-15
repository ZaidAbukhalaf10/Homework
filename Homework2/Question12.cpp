#include <stdio.h>
#include <stdlib.h>

int main (){
	int num,c=1,result=0,i=1;
	printf("Enter a number:");
	scanf("%d",&num);
	for(c=1; c <= num; c++){
		i=1;
		result=0;
		for (i=1; i < c; i++){
			if (c %i == 0){
			result+=i;
			}	
		}
		if(result == c){
			printf("%d is perfect number.\n",c);
			}
	}
	return 0;
}
