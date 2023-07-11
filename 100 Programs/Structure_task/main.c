#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
    int a;
    int b;
    int c;
}stud;

int main()
{
    stud *ptr;

    stud *st = NULL;
    st = (stud *)malloc(sizeof(stud));

    ptr = st;

    *ptr = 100;
    ptr++;
    *ptr = 200;
    ptr++;
    *ptr = 300;


    printf("%d %d %d\n",st->a,st->b,st->c);

    free(st);

    return 0;
}
