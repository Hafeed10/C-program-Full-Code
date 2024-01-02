#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j,values[3][3][3];
    printf("Enter  values");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&values[i][j]);

        }
    }
    
        printf("Ented values are:");
        for(i=0;i<3;i++){
              for(j=0;j<3;j++){
                    printf("%d",values[i][j]);
              }
              printf("\n");
      }
      

    
    return 0;
}

          

