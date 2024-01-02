#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int limit,i,values[100],sum=0;
    printf("Enter limit");
    scanf("%d",&limit); 
    printf("Enter values");
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }

    for(i=0;i<limit;i++){
        sum=sum+values[i];
    }

    printf("sum%d",sum);
    return 0;
}
