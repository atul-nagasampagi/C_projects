#include <stdio.h>

void add_students(struct Student *s1,FILE *fp){

    rewind(fp);
    int count=0;

    if(fp == NULL){
        puts("Cannot open file");
        exit(1);
    }

    while(fscanf(fp,"%d %s %d %d %s",&s1->id,s1->name,&s1->age,&s1->rollno,s1->dept)!=EOF){
        count++;
    }

    printf("Number of Student Record: %d\n",count+1);

    if(count<=100){
        s1->id = count+1000;
        fprintf(fp,"%d ",s1->id);

        printf("Enter student name:\n");
        scanf("%s",s1->name);
        fprintf(fp,"%s ",s1->name);

        printf("Enter student age:\n");
        scanf("%d", &s1->age);
        fprintf(fp,"%d ",s1->age);

        printf("Enter student Roll No.:\n");
        scanf("%d", &s1->rollno);
        fprintf(fp,"%d ",s1->rollno);

        printf("Enter student Department:\n");
        scanf("%s",s1->dept);
        fprintf(fp,"%s\n",s1->dept);
    }

}

void update_student(struct Student *s1,FILE *fp){

    rewind(fp);


    int id,flag=0,i=0,count=0;
    while(fscanf(fp,"%d %s %d %d %s",&s1->id,s1->name,&s1->age,&s1->rollno,s1->dept)!=EOF){
        count++;
    }
    printf("count %d\n",count);
    struct Student sarr[count-1];
    printf("Enter the ID of the student to be Updated:\n");
    scanf("%d", &id);

    rewind(fp);

    while(fscanf(fp,"%d %s %d %d %s", &s1->id,s1->name,&s1->age,&s1->rollno,s1->dept) != EOF)
    {
        if(s1->id == id){
            flag = 1;

            enum options{
                modify_name=1,modify_age,modify_rollno,modify_dept
            };

            int choice;
            printf("Enter\n1. Modify Name\n2. Modify Age\n3. Modify Roll No.\n4. Modify Department\n");
            scanf("%d",&choice);
            switch(choice){
            case modify_name:
                printf("Enter new name:\n");
                scanf("%s",s1->name);
                break;
            case modify_age:

                printf("Enter new age:\n");
                scanf("%d",&s1->age);
                break;
            case modify_rollno:

                printf("Enter new rollno:\n");
                scanf("%d",&s1->rollno);
                break;
            case modify_dept:

                printf("Enter new dept:\n");
                scanf("%s",s1->dept);
                break;
            }
            //if id found, then insert updated the data in the array of structures
            sarr[i].id = s1->id;
            strcpy(sarr[i].name,s1->name);
            sarr[i].age = s1->age;
            sarr[i].rollno = s1->rollno;
            strcpy(sarr[i].dept,s1->dept);

        }
        //if id not found, then insert the original data in the array of structures
        sarr[i].id = s1->id;
        strcpy(sarr[i].name,s1->name);
        sarr[i].age = s1->age;
        sarr[i].rollno = s1->rollno;
        strcpy(sarr[i].dept,s1->dept);
        i++;
    }

    rewind(fp);

    for(i=0;i<count;i++){
        fprintf(fp,"%d %s %d %d %s\n",sarr[i].id,sarr[i].name,sarr[i].age,sarr[i].rollno,sarr[i].dept);
    }

    if(flag == 0){
        printf("ID not found\n");
        return;
    }else{
        printf("New student details updated\n");
    }
}

void delete_student(struct Student *s1,FILE *fp){

    int id,count = 0,flag=0,i=0;

    rewind(fp);

    while(fscanf(fp,"%d %s %d %d %s",&s1->id,s1->name,&s1->age,&s1->rollno,s1->dept)!=EOF){
        count++;
    }

    rewind(fp);

    struct Student sarr[count-1];

    printf("Enter the ID of the student to be deleted:\n");
    scanf("%d", &id);

    //to check whether the id given is present in the file or not
    while(fscanf(fp,"%d %s %d %d %s",&s1->id,s1->name,&s1->age,&s1->rollno,s1->dept)!=EOF){
        if(s1->id == id){
            flag = 1;
        }
    }

    rewind(fp);

    //to copy the data from the file to array of structures except the given id
    while(fscanf(fp, "%d %s %d %d %s",&s1->id,s1->name,&s1->age,&s1->rollno,s1->dept)!=EOF) {
        if(s1->id!=id){
            sarr[i].id = s1->id;
            strcpy(sarr[i].name,s1->name);
            sarr[i].age = s1->age;
            sarr[i].rollno = s1->rollno;
            strcpy(sarr[i].dept,s1->dept);
            i++;
        }
    }

    truncate("C:/Users/pthin/OneDrive/Desktop/recrds.txt", 0);

    rewind(fp);

    for(i=0;i<count-1;i++){
        fprintf(fp,"%d %s %d %d %s\n",sarr[i].id,sarr[i].name,sarr[i].age,sarr[i].rollno,sarr[i].dept);
    }

    if(flag == 0){
        printf("ID not found\n");
    }else{
        printf("Student details deleted successfully\n");
    }
}
