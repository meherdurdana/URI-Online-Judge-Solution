#include<stdio.h>
int main()
{
    int per;
    float salary,nsalary,earn;
    scanf("%f",&salary);

    if(0<=salary && salary<=400.00)
    {
        per = 15;
        earn=salary*per/100;
        nsalary= salary+earn;
    }
    else if(400.01<=salary && salary<=800.00)
    {
        per = 12;
        earn=salary*per/100;
        nsalary= salary+earn;

    }
    else if(800.01<=salary && salary<=1200.00)
    {
        per = 10;
        earn=salary*per/100;
        nsalary= salary+earn;
    }
    else if(1200.01<=salary && salary<=2000.00)
    {
        per = 7;
        earn=salary*per/100;
        nsalary= salary+earn;
    }
    else if(salary>2000.00)
    {
        per = 4;
        earn=salary*per/100;
        nsalary= salary+earn;
    }
    printf("Novo salario: %.2f\n",nsalary);
    printf("Reajuste ganho: %.2f\n",earn);
    printf("Em percentual: %d %\n",per);

    return 0;
}



