#include<stdio.h>
int main()
{
    char name;
    double salary,value,Total;
    scanf("%s %lf %lf",&name,&salary,&value);
    Total=((value*15)/100)+salary;
    printf("TOTAL = R$ %.2lf\n",Total);

    return 0;
}
