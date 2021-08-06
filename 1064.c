#include<stdio.h>
int main()
{
    double n,sum=0,v;
    int count=0,i;

    for(i=0; i<6; i++)
    {
        scanf("%lf",&n);
        if(n>0)
        {
            count++;
            sum=sum+n;
        }

    }
    v=sum/count;

    printf("%d valores positivos\n",count);
    printf("%.1lf\n",v);

    return 0;
}
