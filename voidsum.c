#include<stdio.h>
#include<stdlib.h>

void sum(int,int);

int main() {
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d,%d",&a,&b);
    sum(a,b);

    return 0;
}

 
void sum(int num1,int num2){
     int result;


    result=num1+num2;
    printf("Reslut is %d",result);
}




