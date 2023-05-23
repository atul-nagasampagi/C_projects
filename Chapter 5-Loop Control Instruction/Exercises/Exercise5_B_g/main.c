#include <stdio.h>

int main()
{
    int number, positive = 0, negative = 0, zero = 0,choice = 1;;


    while(choice){
        printf("Enter a number :");
        scanf("%d", &number);
        printf("Enter a choice :");
        scanf("%d", &choice);
        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d\n",
           positive, negative, zero);

    return 0;
}
