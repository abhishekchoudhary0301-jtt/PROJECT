#include <stdio.h>

int main()
{
    int n, rev = 0, rem, temp;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        rem = n %10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome number");
    else
        printf("Not palindrome");

    return 0;
}
//OUTPUT:
INPUT:ENTER A STRING:121
OUTPUT:PALINDRONE NUMBER 