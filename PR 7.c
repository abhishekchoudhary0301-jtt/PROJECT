#include <stdio.h>

void calculator()
{
    int a, b, choice;

    printf("\n--- CALCULATOR ---\n");
    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %%\n");
    printf("Press 0 for exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 0)
        return;

    if (choice < 1 || choice > 5)
    {
        printf("Invalid choice!\n");
        return;
    }

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch (choice)
    {
        case 1:
            printf("Addition = %d\n", a + b);
            break;

        case 2:
            printf("Subtraction = %d\n", a - b);
            break;

        case 3:
            printf("Multiplication = %d\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Division = %d\n", a / b);
            else
                printf("Division by zero is not possible!\n");
            break;

        case 5:
            if (b != 0)
                printf("Modulus = %d\n", a % b);
            else
                printf("Modulus by zero is not possible!\n");
            break;
    }
}

int main()
{
    int choice;

    do
    {
        calculator();

        printf("\nPress 1 to continue or 0 to exit: ");
        scanf("%d", &choice);

    } while (choice != 0);

    printf("Calculator closed.\n");

    return 0;
}