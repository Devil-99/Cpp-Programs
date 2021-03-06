#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct student
{
    char name[100];
    int marks;
};

int append()
{
    FILE *file;
    file = fopen("student", "a+b");
    struct student *obj,obj1;
    obj = &obj1;
    printf("Enter name of student -> ");
    scanf("%s",obj->name);
    printf("Enter marks of student -> ");
    scanf("%d",&obj->marks);
    if(file!=NULL)
    {
        fwrite(obj, sizeof(struct student), 1, file);
        fclose(file);
        printf("\nAppended Successfully -> Press Enter");
    }
    else
        printf("Could Not Open File ... ");
    _getch();

    return 0;
}

int display()
{
    struct student *obj=malloc(sizeof(struct student));
    FILE * file= fopen("student", "rb");
    int c=0;
    while (fread(obj, sizeof(struct student), 1, file))
    {
        printf("\nName : %s , Marks : %d",obj->name,obj->marks);
        ++c;
    }
    fclose(file);
    printf("\n\n%d records found -> Press Enter",c);
    _getch();
    return 0;
}

int update(char key[])
{
    struct student *obj=malloc(sizeof(struct student));
    FILE * file= fopen("student", "r+b");
    FILE * fileo = fopen("temp","a+b");
    int flag = 0;
    while (fread(obj, sizeof(struct student), 1, file))
    {
        if(strcmp(obj->name,key) == 0)
        {
            printf("\nFile Found -> Name : %s , Marks : %d",obj->name,obj->marks);
            printf("\nEnter New Name -> ");
            scanf("%s",obj->name);
            printf("Enter New Marks -> ");
            scanf("%d",&obj->marks);
            flag = flag + 1;
        }
        fwrite(obj, sizeof(struct student), 1, fileo);
    }
    if(flag == 0)
    {

        printf("\nNo Record Found & Updated -> Press Enter");
        _getch();
    }
    else
    {
        printf("\n%d Record Updated -> Press Enter",flag);
        _getch();
    }
    fclose(file);
    fclose(fileo);
    remove("student");
    rename("temp","student");
    return 0;
}

int fdelete(char key[])
{
    struct student *obj=malloc(sizeof(struct student));
    FILE * file= fopen("student", "r+b");
    FILE * fileo = fopen("temp","a+b");
    int flag = 0;
    while (fread(obj, sizeof(struct student), 1, file))
    {
        if(strcmp(obj->name,key) == 0)
        {
            flag = flag + 1;
            continue;
        }
        fwrite(obj, sizeof(struct student), 1, fileo);
    }
    if(flag == 0)
    {
        printf("No Record Found & Deleted -> Press Enter");
        _getch();
    }
    else
    {
        printf("\n%d Record Deleted -> Press Enter",flag);
        _getch();
    }
    fclose(file);
    fclose(fileo);
    remove("student");
    rename("temp","student");
    return 0;
}

int main()
{
    char rec[100];
    while(1)
    {
        code: system("CLS");
        printf("\nEnter 1 to append a record");
        printf("\nEnter 2 to delete a record");
        printf("\nEnter 3 to update a record");
        printf("\nEnter 4 to display all record");
        printf("\nEnter 5 to Exit");
        printf("\nEnter Your Choice :: ");
        int c;
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                append();
                break;
            case 2:
                 printf("Enter the name of the student whose data you want to delete -> ");
                scanf("%s",rec);
                fdelete(rec);
                break;
            case 3:
                printf("Enter the name of the student whose data you want to update -> ");
                scanf("%s",rec);
                update(rec);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid input");
                _getch();
        }
    }
    exit(0);
}
