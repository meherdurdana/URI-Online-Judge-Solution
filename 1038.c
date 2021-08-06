#include<stdio.h>
int main()
{
    int x,y;
    double a;
    scanf("%d %d",&x,&y);

    switch(x)
    {
    case 1:
        a=y*4.00;
        printf("Total: R$ %.2lf\n",a);
        break;
    case 2:
        a=y*4.50;
        printf("Total: R$ %.2lf\n",a);
        break;
    case 3:
        a=y*5.00;
        printf("Total: R$ %.2lf\n",a);
        break;
    case 4:
        a=y*2.00;
        printf("Total: R$ %.2lf\n",a);
        break;
    case 5:
        a= y*1.50;
        printf("Total: R$ %.2lf\n",a);
        break;
    }
     return 0;
}
