#include <stdio.h>
 
int main()
{
    double number, sum = 0, n;
 
    printf("\n enter the number ");
    scanf("%lf", &number);
    for (n = 2; n <= number; n+=2)
    {
        sum = sum + (1 / n);
        if (n == number)
            printf(" (1 / %lf)", n);
        else
            printf(" (1 / %lf) + ", n);
    }
    printf("\n The sum of the given series is %.2lf", sum);
	return 0;
}
