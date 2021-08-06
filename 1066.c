#include<stdio.h>
int main()
{
    int n,i,par=0,im=0,pos=0,neg=0;

    for(i=0; i<5; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            par++;
        }
        if(n<0)
        {
            neg++;
        }
        if(n>0)
        {
            pos++;
        }
        if(n%2!=0)
        {
            im++;
        }
    }

    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",im);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}

