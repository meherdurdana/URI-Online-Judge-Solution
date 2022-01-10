#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
             printf("%d^%d = %d\n",(i+2),2,((i+2)*(i+2)));

        }
    }

    return 0;
}

