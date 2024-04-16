#include <stdio.h>
#include <stdlib.h>

#include "mathHeader.h"


int main()
{
  /*
    float h,d ;
    printf("enter angel 1: ");
    scanf("%f" , &h);
    printf("enter angel 2: ");
    scanf("%f" , &d);
    float f=180-(h+d);
    printf("%f" , f );
*/

/*
int x;
printf("number :");
scanf("%d",&x);
int result = func(x);
printf("the sum digits = %d" , result);
*/

int x = 10;
const int* ptr = &x;
printf("%d\n" , *ptr );
//*ptr = 20; error

x = 20; //true
printf("%d\n" , *ptr );

int y =30;
ptr = &y; //true
printf("%d\n" , *ptr);
printf("----------------------------\n");

int x2 = 10;
int *const ptr2 = &x2;
int y2 = 50;
//ptr2 = &y2; error
*ptr2 = 60; //true
printf("%d\n" , *ptr2);
printf("%d\n" , x2);

int x3 =10;
const int* const ptr3 =&x3;
x3 = 60;
printf("%d\n" , *ptr3 );
printf("%d\n" ,&x );



    return 0;
}
