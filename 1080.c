#include<stdio.h>
int main()
{
    int highest,a[100],i;
    int position=0;

    for(i=0; i<100; i++)
    {
        scanf("%d",&a[i]);
    }

    highest=a[0];

    for(i=0; i<100; i++)
    {
        if(a[i]>highest)
        {

            highest=a[i];
            position=i+1;
        }

    }
    printf("%d\n",highest);
    printf("%d\n",position);

    return 0;
}

