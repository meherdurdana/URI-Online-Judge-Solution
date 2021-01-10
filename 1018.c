#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d", &a);
    printf("%d\n", a);
    b=a/100;
    c=(a%100)/50;
    d=((a%100)%50)/20;
    e=(((a%100)%50)%20)/10;
    f=((((a%100)%50)%20)%10)/5;
    g=(((((a%100)%50)%20)%10)%5)/2;
    h=((((((a%100)%50)%20)%10)%5)%2)/1;

    printf("%d nota(s) de R$ 100,00\n",b);
    printf("%d nota(s) de R$ 50,00\n",c);
    printf("%d nota(s) de R$ 20,00\n",d);
    printf("%d nota(s) de R$ 10,00\n",e);
    printf("%d nota(s) de R$ 5,00\n",f);
    printf("%d nota(s) de R$ 2,00\n",g);
    printf("%d nota(s) de R$ 1,00\n",h);
    return 0;
}
