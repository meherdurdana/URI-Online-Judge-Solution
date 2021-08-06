
#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);

    for(i=n; i<=(n+10); i+=2)
    {
        if(i%2==0)
        {
            a=i+1;
            printf("%d\n",a);
        }

        else
        {
            a=i;
            printf("%d\n",a);
        }

    }


    return 0;
}
