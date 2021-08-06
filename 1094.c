#include<stdio.h>
int main()
{
    int n,i;
    int a=0,b=0,c=0,x,sum=0;
    char y;
    scanf("%d",&n);
    double coel,rat,sap;

    for(i=0; i<n; i++)
    {
        scanf("%d %c",&x,&y);
        if(y=='C')
        {
            a=a+x;
        }
        else if(y=='R')
        {
            b=b+x;
        }
        else if(y=='S')
        {
            c=c+x;
        }
        sum = sum + x;
    }

    coel=(double)(a*100)/sum;
    rat=(double)(b*100)/sum;
    sap=(double)(c*100)/sum;

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",a);
    printf("Total de ratos: %d\n",b);
    printf("Total de sapos: %d\n",c);
    printf("Percentual de coelhos: %.2lf %\n",coel);
    printf("Percentual de ratos: %.2lf %\n",rat);
    printf("Percentual de sapos: %.2lf %\n",sap);

    return 0;
}

