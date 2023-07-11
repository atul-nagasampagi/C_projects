#include <stdio.h>

struct Student{
    char name[30];
    int sub1,sub2,sub3;
    float total_marks,result;
};

int main()
{
    int n,i;
    printf("Enter the number of students:\n");
    scanf("%d",&n);

    struct Student s[n];

    for(i=0;i<n;i++){
        fflush(stdin);
        printf("Enter Student %d name:\n",i+1);
        gets(s[i].name);
        printf("Enter Student %d 3 Subject marks:\n",i+1);
        scanf("%d %d %d",&s[i].sub1,&s[i].sub2,&s[i].sub3);
        s[i].total_marks = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].result = s[i].total_marks/3;
    }
    printf("Name\tSub1\tSub2\tSub3\tTotal Marks\tResult\n");
    printf("-------------------------------------------------------------\n");
    for(i=0;i<n;i++){
        printf("%s\t%d\t%d\t%d\t%f\t%f\n",s[i].name,s[i].sub1,s[i].sub2,s[i].sub3,s[i].total_marks,s[i].result);
    }

    return 0;
}
