#include<stdio.h>
int main()
{
   int y;
   printf("enter the year\n");
   scanf("%d",&y);
   switch(y%100)
   {
    case 1 ... 99:
    if(y%4==0)
        printf("%d is leap year",y);
        else
        printf("%d is not leap year",y);
    case 0:
    if(y%400==0)
    printf("%d is leap year",y);
    else
    printf("%d is not leap year",y) ;   
   } 
   return 0;
}