#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[5];
        int i;
        printf("Enered values");
        for(i=0;i<5;i++){
            scanf("%d",&a[i]);
        }
        printf("Enterd values are:");

        for(i=0;i<5;i++){ 
        printf("%d",a[i]);
        return 0;
        }
}