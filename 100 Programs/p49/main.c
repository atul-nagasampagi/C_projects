#include <stdio.h>

int isLeapYear(int year)
{
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int getDaysInMonth(int month, int year)
{
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;

        case 2:
            if (isLeapYear(year))
                return 29;
            else
                return 28;

        default:
            return -1;
    }
}

void printNextDay(int day, int month, int year)
{
    int daysInMonth = getDaysInMonth(month, year);

    if (day < 1 || day > daysInMonth)
    {
        printf("Invalid date!\n");
        return;
    }

    if (day == daysInMonth)
    {
        if (month == 12)
        {
            printf("Next day: 1/1/%d\n", year + 1);
        }
        else
        {
            printf("Next day: 1/%d/%d\n", month + 1, year);
        }
    }
    else
    {
        printf("Next day: %d/%d/%d\n", day + 1, month, year);
    }
}

int main()
{
    int day, month, year;

    printf("Enter the date (dd mm yyyy):\n");
    scanf("%d %d %d", &day, &month, &year);

    printf("Given date: %d/%d/%d\n", day, month, year);

    printNextDay(day, month, year);

    return 0;
}
