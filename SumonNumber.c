#include <stdio.h>
#include <stdlib.h>
 int main(void){
    
    int number,i,sum=0;
    printf("enter a number");
    scanf("%d",&number);
    
    for ( i = 1; i <=number; i++)
    {
        sum=sum+i;
    }
    printf("result is : %d",sum);

    return EXIT_SUCCESS;
 }
