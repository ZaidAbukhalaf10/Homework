#include <stdio.h>

int main() {
    int n, i=0, num, sum=0, pow=1, product, digit,counter=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for (counter=1;counter <= num;counter++){
		n=counter;
		sum=0;
		i=0;
		while (n > 0){
    		n=n/10;
    		// i to store the digit lenght\digits in number
			i++;
		}
		n=counter;
		if (n<=9){
			printf("%d is Armstrong number.\n",n);
		}
		else{
			while (n > 0){
				digit=n%10; 
				n=n/10;
				product=i;
				pow=1;
				for(product=i; product > 0; product--){
					pow*=digit;
				}
				sum+=pow;
			}
			if (sum == counter){	
				printf("%d is Armstrong number.\n",counter);		
			}
		}
}	
	return 0;
}
