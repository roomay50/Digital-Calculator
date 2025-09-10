#include <stdio.h>
#include <stdlib.h>

int get_first_number()
{
    int first_number;
    char term;
    int result;
    do
    {
        printf("\nenter your first number(an integer): ");
        result = scanf("%d%c", &first_number, &term);
        if (result != 2)
        {
            printf("invalid input. Enter an integer");
            while (getchar() != '\n')
                ;
        }

    } while (result != 2 || term != '\n');

    return first_number;
}

int get_second_number()
{
    int second_number;
    char term;
    int result;

    do
    {
        printf("enter your second number(an integer): ");
        result = scanf("%d%c", &second_number, &term);
        if (result != 2)
        {
            printf("Invalid input. Enter an integer ");
            while (getchar() != '\n')
                ;
        }
    } while (result != 2 || term != '\n');

    return second_number;
}

char get_operator()
{
    char operator[] = {'+', '-', '*', '/', 'q'};
    printf("enter the operator (+, -, *, /, press q to quit): ");
    scanf("%s", &operator);
    return *operator;
}

int add(int first_number, int second_number)
{
    int sum = first_number + second_number;
    printf("\nSum: %d\n", sum);
}

int subtract(int first_number, int second_number)
{
    int difference = first_number - second_number;
    printf("\nDifference: %d\n", difference);
}

int multiply(int first_number, int second_number)
{
    int product = first_number * second_number;
    printf("\nProduct: %d\n", product);
}

int divide(int first_number, int second_number)
{
    int divide = first_number / second_number;
    printf("\nQuotient: %d\n", divide);
}

float float_division(float first_number, float second_number)
{
    float mod = first_number / second_number;
    printf("\nFloat division: %.2f \n", mod);
}

void perform_operations(int first_number, char operator, int second_number)
{
    if (operator == '+')
    {
        int sum = add(first_number, second_number);
    }
    else if (operator == '-')
    {
        int difference = subtract(first_number, second_number);
    }
    else if (operator == '*')
    {
        int product = multiply(first_number, second_number);
    }
    else if (operator == '/')
    {
        float divide = float_division(first_number, second_number);
    }
}

int use_again()
{
    char reply;
    scanf(" %c", &reply);

    char no_operation = 'n';

    if (reply == no_operation)
    {
        printf("thank you for using c calculator");
        exit(0);
    }
    else
    {
        return 1;
    }
}