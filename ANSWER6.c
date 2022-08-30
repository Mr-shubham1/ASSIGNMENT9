#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    switch (a%2)
    {
        case 0:
        a=a+1;
        printf("%d",a);
        break;
        case 1:
        printf("%d",a);
        break;
    }
    return 0;
}