#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n/365;
    b=(n%365)/30;
    c=n%365%30;
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",b);
    printf("%d dia(s)\n",c);

}
