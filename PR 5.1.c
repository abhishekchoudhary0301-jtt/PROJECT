
#include <stdio.h>

int main()
{
    int a[5] = {10, -20, 30, -40, -50};
    int i;

    printf("Negative numbers are:\n");

    for(i = 0; i < 5; i++)
    {
        if(a[i] < 0)
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}