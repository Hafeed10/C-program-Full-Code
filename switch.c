#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int choice; 
    printf("1 for porotta \n2 for puttu \n3 for biriyani \n4 for manti \n Enter Your choice");
    scanf("%d",&choice);
   switch (choice){
   case 1:
       printf("You have selected porotta");
       break;
    case 2:
       printf("You have selected Biriyani");
       break;
    case 3: 
       printf("You have selected Fried Rice  ");
       break;
    case 4:
       printf("You have selected mandhi");
       break;
    default:
       printf("Fool!!!"); 
       break;  
}
}