#include<stdio.h>
int main()
{
    double A,B,C,v,w,x,y,z;
    scanf("%lf %lf %lf",&A,&B,&C);
    v=0.5*A*C;
    w=C*C*3.14159;
    x=((A+B)/2)*C;
    y=B*B;
    z=A*B;
    printf("TRIANGULO: %.3lf\n",v);
    printf("CIRCULO: %.3lf\n",w);
    printf("TRAPEZIO: %.3lf\n",x);
    printf("QUADRADO: %.3lf\n",y);
    printf("RETANGULO: %.3lf\n",z);

    return 0;
}
