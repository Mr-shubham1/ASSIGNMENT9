#include<stdio.h>
#include<stdlib.h>
int main()
{
   
    int a,b,choice;
    float c,d;
    printf("choice 1: add\n");
    printf("choice 2: sub\n");
    printf("choice 3: mult\n");
    printf("choice 4: divn\n");
    printf("chpice 5: exit\n");
 while(1)
    {
    printf("enter your choice\n");
     scanf("%d",&choice);
    
    switch (choice)
    {
     case 1:
     printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
     printf("sum is %d\n",a+b);
     break;
     case 2:
      printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
     printf("sub is %d\n",a-b);
     break;
     case 3:
      printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
     printf("mult is %d\n",a*b);
     break;
     case 4:
      printf("enter two numbers\n");
    scanf("%d %d",&c,&d);
     printf(" div is%f\n",c/d);
     break;
     case 5:
     exit(0);
    }
}
       return 0;
}