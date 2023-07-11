#include <stdio.h>

struct Student{
    char name[30];
    int marks;
};

int main()
{
    int i,size,count1 = 0,count2 = 0,count3 = 0;
    printf("Enter the number of students:\n");
    scanf("%d",&size);
    struct Student s[size];

    for(i=0;i<size;i++){
        printf("Enter Student %d name:\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter Student %d marks:\n",i+1);
        scanf("%d",&s[i].marks);
    }
    i=0;

    while(i<size){
        if(s[i].marks>=1 && s[i].marks<=10){
            count1++;
        }else if(s[i].marks>=11 && s[i].marks<=20){
            count2++;
        }else{
            count3++;
        }
        i++;
    }
    printf("Frequency Distribution Table\n");
    printf("--------------------------------\n");
    printf("Marks\tNumber of Students\n");
    printf("1-10\t\t%d\n",count1);
    printf("11-20\t\t%d\n",count2);
    printf("21-25\t\t%d\n",count3);

    return 0;
}
