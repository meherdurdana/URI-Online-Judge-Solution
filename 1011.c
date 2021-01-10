#include<stdio.h>
int main()
{
    double R,volume;
    scanf("%lf",&R);
    volume = (4/3.0) * 3.14159 * R * R * R;
    printf("VOLUME = %.3f\n",volume);
    return 0;
}
