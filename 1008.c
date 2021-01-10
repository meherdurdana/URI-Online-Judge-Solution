#include<stdio.h>
int main()
{
    int a,b;
    float c;
    double SALARY;
    scanf("%d %d %f",&a,&b,&c);
    SALARY = b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;

}
