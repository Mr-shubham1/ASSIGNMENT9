#include<stdio.h>
int main()
{
    int unit;
    float c;
    printf("enter the unit electricity spent");
    scanf("%d",&unit);
    switch (unit)
    {
        case 1 ... 50:
        c=unit*0.5;
        c=c*1.2;
        printf("cost of %d unit electricity is %f",unit,c);
        break;
        case 51 ... 150:
        c=unit*0.75;
        c=c*1.2;
        printf("cost of %d unit electricity is %f",unit,c);
        break;
        case 151 ... 250:
        c=unit*1.20;
        c=c*1.2;
        printf("cost of %d unit of electricity is %f",unit,c);
        break;
        default :
        c=unit*1.5;
        c=c*1.2;
        printf("cost of %d unit of electricity is %f",unit,c);
    }
    return 0;
}