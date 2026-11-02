// Standard Calculator using basic operators and the math.h library

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b; // Variables to store user input
    char op, c; // op stores the operation, c stores the user's choice to continue

    // Run the calculator repeatedly to simulate a real calculator
    for(int num = 0; num < 50; num++)
    {
        printf("\nEnter first number: ");
        scanf("%f", &a);

        printf("Enter second number: ");
        scanf("%f", &b);

        // Take the desired operation from the user
        printf("Enter operation (+, -, *, /, %%, ^): ");
        scanf(" %c", &op);

        if(op == '+')
        {
            printf("Result = %.2f", a + b);
        }
        else if(op == '-')
        {
            printf("Result = %.2f", a - b);
        }
        else if(op == '*')
        {
            printf("Result = %.2f", a * b);
        }
        else if(op == '/')
        {
           
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not allowed.");
        }
        else if(op == '%')
        {
            // Modulus operator works only with integers
            printf("Result = %d", (int)a % (int)b);
        }
        else if(op == '^')
        {
            // Calculate power using the pow() function from math.h
            printf("Result = %.2f", pow(a, b));
        }
        else
        {
            // Handle invalid operator input
            printf("Invalid operation.");
        }

        // Ask the user whether to continue using the calculator
        printf("\nDo you wish to continue? [Y/N]: ");
        scanf(" %c", &c);

        if(c == 'N' || c == 'n')
        {
            break;
        }
    }

    printf("\nThank you for using the calculator.\n");

    return 0;
}
