#include <stdio.h>
#include <stdlib.h>

 int main(void) {
    int limit=5,i,j;
    for(i=1;i<limit;i--){
        for(j=0;j<i;j++){
            printf(" * ");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
 }      