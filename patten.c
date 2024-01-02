#include <stdio.h>
#include <stdlib.h>
  
int main(void) {
     int limit=6,i=6,j;
     for(i;i<=limit;i--){
      if (i==0){
          break;
      }
      
      for(j=1;j<=i;j++){
       printf("* ");
      }
     printf("\n");
    }

    return 0;
}





