#include <stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf",&a,&b,&c);

    d=a*a;
    e=b*b;
    f=c*c;

    if (a>=b+c|| b>=a+c||c>=a+b)
        printf("NAO FORMA TRIANGULO\n");
    else if (d==e+f|| e==d+f|| f==d+e)
       printf("TRIANGULO RETANGULO\n");
    else if (d>e+f|| e>d+f|| f>d+e)
        printf("TRIANGULO OBTUSANGULO\n");
    else if (d<e+f|| e<d+f|| f<d+e)
        printf("TRIANGULO ACUTANGULO\n");
    if (a==b && a==c)
        printf("TRIANGULO EQUILATERO\n");
    if (a==b && a!=c || b==c && b!=a || a==c && a!=b)
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}
