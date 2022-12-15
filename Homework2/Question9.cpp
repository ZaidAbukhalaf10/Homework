#include <stdio.h>




int main() {
    int n, i=0, num, sum=0, pow=1, product, digit;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num;
    while (n > 0){
    	n=n/10;
    	// i to store the digit lenght\digits in number
		i++;
	}
	n=num;
	while (n > 0){
		digit=n%10; 
		n=n/10;
		product=i;
		pow=1;
		for(product=i; product > 0; ){
			pow*=digit;
			product--;
		}
		sum+=pow;
	}
	if (sum == num)
		printf("%d is Armstrong number",num);
			
	else 
		printf("%d is not Armstrong number",num);
    return 0;
}
