#include <stdio.h>  
   
int getFactorial(int n);  
   
int main() {  
    int row, rows, i, value;
   
    printf("Enter Number of Rows of Pascal Triangle\n");  
    scanf("%d", &rows);  
   
    for(row = 0; row < rows; row++) {  
        /* Print Spaces for every row */  
        for(i = row; i <= rows; i++)  
            printf("  ");  
   
        for(i = 0; i <= row; i++) {  
            value = getFactorial(row)/(getFactorial(i)*getFactorial(row-i));  
            printf("%4d", value);  
        }  
   
        printf("\n");  
    }  
   
    return 0;  
}  
   
/*
 * Function to calculate factorial of a number 
 */
int getFactorial(int N){
    if(N < 0){
        printf("Invalid Input: factorial not defined for \
negative numbers\n");
        return 0;
    }
    int nFactorial = 1, counter;
    /*  N! = N*(N-1)*(N-2)*(N-3)*.....*3*2*1  */
    for(counter = 1; counter <= N; counter++){
        nFactorial = nFactorial * counter;
    }    
    return nFactorial;
}
