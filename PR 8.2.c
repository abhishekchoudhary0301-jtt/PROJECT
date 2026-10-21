#include <stdio.h>

void cube(int *p, int n)
{
    int i, j;
    for(i = 0; i < n*n; i++)
        printf("%d ", *(p+i) * *(p+i) * *(p+i));
}

int main()
{
    int a[2][2], i, j;

    printf("Enter 4 elements:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Cubes:\n");
    cube(&a[0][0], 4);

    return 0;
}