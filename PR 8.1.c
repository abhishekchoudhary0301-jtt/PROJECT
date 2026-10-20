#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count;

    printf("Enter a string: ");
    scanf("%s", str);

    count = strlen(str);

    printf("Total characters = %d", count);

    return 0;
}