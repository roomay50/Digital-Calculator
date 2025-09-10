#include <stdio.h>
#include "functions.h"

int main()
{
    printf("\nenter q to quit\n");

    while (1)
    {

        int first_number = get_first_number();

        char operator = get_operator();
        if (operator == 'q')
        {
            printf("thank you for using C calculator");
            break;
        }

        int second_number = get_second_number();

        perform_operations(first_number, operator, second_number);

        printf("do you want to perform another operation? (y or n)");
        use_again();
    }
    return 0;
}