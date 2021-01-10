#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,D,E,f;
    scanf("%lf %lf %lf",&a,&b,&c);

    f = (b*b) - (4*(a)*(c));

    if(f>0 && a!=0)
    {
        D = (-b + sqrt(f))/ (2*a);
        E = (-b - sqrt(f))/ (2*a);
        printf("R1 = %.5lf\n",D);
        printf("R2 = %.5lf\n",E);
    }
    else
    {
        printf("Impossivel calcular\n");
    }



    return 0;
}

