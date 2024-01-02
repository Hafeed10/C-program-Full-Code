#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numbar1,number2;
    printf("Enter 2 numbres");
    scanf("%d,%d",&numbar1,&number2);
    if(numbar1>number2){
        printf("Greatest numbar is %d",numbar1);
    }else{
        printf("Greatest numbar is %d",number2);
    }
            return 0;
}            

