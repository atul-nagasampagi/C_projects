#include <stdio.h>

struct Student{
    char name[30];
    int rollno;
    float marks;
};

int main()
{
    int i;
    struct Student s[3];
    for(i=0;i<3;i++){
        printf("Enter the Student %d name:\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter the Student %d rollno:\n",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter the Student %d marks:\n",i+1);
        scanf("%f",&s[i].marks);
    }
    printf("Name\tRollno\tMarks\n");
    printf("-------------------------------\n");
    for(i=0;i<3;i++){
        printf("%s\t%d\t%f\n",s[i].name,s[i].rollno,s[i].marks);
    }
    return 0;
}
