#include <stdio.h>

int main()
{
    int total = 21, p, c;
    while(1)
    {
        printf("Number of Match sticks left = %d\n",total);
        printf("Pick 1 or 2 or 3 or 4 matches\n");
        scanf("%d", &p);

        if(p > 4 || p < 1)
            continue;
        total = total - p;
        printf("Number of matches left = %d\n", total);
        c = 5 - p;
        printf("out of which computer picked up %d\n", c);
        total = total - c;
        if(total == 1)
        {
            printf("\nNumber of matches left = %d\n", total);
            printf("You lost the Game\n");
            break;
        }
    }

    return 0;
}
