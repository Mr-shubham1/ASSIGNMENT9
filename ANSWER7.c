#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x,y;
    printf("enter the value of a,b,c of the quadratic equation:");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
     switch (d>=0)
     {
        case 1:
        x=((-b)+sqrt(d))/(2*a);
        y=((-b)-sqrt(d))/(2*a);
        printf("roots are %f %f ",x,y);
        break;
        case 0:
        printf("roots are imaginary");
        break;
     }
      return 0;
}