#include<stdio.h>
int main()
{
    int x,y,hour;
    scanf("%d %d",&x,&y);

    hour=y-x;

    if(hour<0)
        hour=24+(y-x);

    if(x==y)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S)\n",hour);

    return 0;
}

