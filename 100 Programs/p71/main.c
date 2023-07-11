#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Hotel{
    char name[30],grade;
    int room_charge,no_of_rooms;
};

struct Hotel hotelarr[100];
int i = 0;
int main()
{

    int choice;
    while(1){
        printf("1. Enter Hotel Details\n2. Display Hotel Details\n3. Exit\n");
        scanf("%d",&choice);
        switch (choice) {
        case 1:
            enter_details(&hotelarr);
            break;
        case 2:
            display_details(&hotelarr,i);
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}

void enter_details(struct Hotel *h1){
    struct Hotel hotels;
    printf("Enter the name of the hotel\n");
    scanf("%s",hotels.name);
    fflush(stdin);
    printf("Enter the grade of the hotel\n");
    scanf("%c",&hotels.grade);
    printf("Enter the Room Charge of the hotel\n");
    scanf("%d",&hotels.room_charge);
    printf("Enter the No. of rooms in the hotel\n");
    scanf("%d",&hotels.no_of_rooms);

    h1[i] = hotels;

    i++;
}

void display_details(struct Hotel *h1,int num){
    int i;
    printf("Name\tGrade\tRoom Charge\tNo. of Rooms\n");
    printf("--------------------------------------------------------\n");
    for(i=0;i<num;i++){
        printf("%s\t%c\t%d\t\t%d\n",h1[i].name,h1[i].grade,h1[i].room_charge,h1[i].no_of_rooms);
    }
}
