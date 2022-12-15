#include<stdio.h>

int main(){

    int num,i,count,n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;
         for(i=2;i<=num/2;i++){
            if(num%i==0){
                count++;
                break;
            }
        }
        
        if(count==0 && num!= 1){
        	sum+=num;
		}  
    }
  	printf("%d ",sum);
   return 0;
}
