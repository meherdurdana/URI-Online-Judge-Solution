#include<stdio.h>
int main()
{
    double a1,b1,a2,b2,p1,p2,y;
    scanf("%lf %lf %lf %lf",&a1,&b1,&a2,&b2);
    p1=a2-a1;
    p2=b2-b1;
    y=sqrt((p1*p1)+(p2*p2));
    printf("%.4lf\n",y);
    return 0;
}

