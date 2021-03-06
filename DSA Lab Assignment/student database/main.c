#include<stdio.h>
#include<stdlib.h>
typedef struct record
{int roll;
    char s[188];
}rec;
void append()
{   rec rc;
    FILE * fp;
    char s1[1000];
    int ch;
    printf("Enter file name : ");
    scanf("%s",s1);
    fp=fopen(s1,"a");
    do{

        printf("Enter roll : ");
        fflush(stdin);
        scanf("%d",&rc.roll);
         printf("Enter name : ");
        fflush(stdin);
        gets(rc.s);
        fflush(stdin);
        printf("%s %d",rc.s,rc.roll);
        fprintf(fp,"%s %d\n",rc.s,rc.roll);
        printf("Do you want to continue : press 5");
        scanf("%d",&ch);

    }while(ch==5);
fclose(fp);
}
void display()
{char s[1000],ll[1000];
    FILE * fp;
    rec rc;
    printf("Enter file name : ");
    scanf("%s",s);
    fp=fopen(s,"r");
   if(!fp)
   {perror("sorry could not open desired file \n");
   }
     fscanf(fp,"%s%d",rc.s,&rc.roll);
    while(!feof(fp))
    {//printf("HEllo\n");

        printf("%d %s\n",rc.roll,rc.s);
fscanf(fp,"%s%d",rc.s,&rc.roll);
    }fclose(fp);
}
void modify()
{
    char s[100],ll[1000];
    FILE * fp,*fp2;
    rec rc;
    int temp,flag=0,n=sizeof(rc);
    printf("Enter file name to open : ");
    scanf("%s",s);
    fp=fopen(s,"r+");
    fp2=fopen("tempo.txt","w");
    printf("Enter the roll to modify : ");
    scanf("%d",&temp);


    while(!feof(fp) )
    { fscanf(fp,"%s %d",rc.s,&rc.roll);
    //printf("Roll is %d\n",rc.roll);
        if(rc.roll==temp)
        {
            printf("Existing details : \n");
            printf("%d %s\n",rc.roll,rc.s);
            printf("Enter modified roll : ");
            scanf("%d",&rc.roll);
            printf("Enter modified name : ");
            fflush(stdin);
            gets(rc.s);

            fprintf(fp2,"%s %d\n",rc.s,rc.roll);
            flag=1;
        }
else
        fprintf(fp2,"%s %d\n",rc.s,rc.roll);
    }fclose(fp);
    fclose(fp2);
      remove(s);
    rename("tempo.txt",s);


    if(flag==0)
        printf("The roll you entered does not exist\n");
}
void delet()
{
    char s[100],ll[1000];
    FILE * fp,*fp2;
    rec rc;
    int temp,flag=0,n=sizeof(rc);
    printf("Enter file name to open : ");
    scanf("%s",s);
    fp=fopen(s,"r+");
    fp2=fopen("tempo.txt","w");
    printf("Enter the roll to modify : ");
    scanf("%d",&temp);


    while(!feof(fp) )
    { fscanf(fp,"%s%d",rc.s,&rc.roll);
    //printf("Roll is %d\n",rc.roll);
        if(rc.roll==temp)
        {
            printf("Existing details : \n");
            printf("%d %s\n",rc.roll,rc.s);

            flag=1;
        }
else
        fprintf(fp2,"%s %d\n",rc.s,rc.roll);
    }fclose(fp);
    fclose(fp2);
      remove(s);
    rename("tempo.txt",s);


    if(flag==0)
        printf("The roll you entered does not exist\n");

}

int main()
{
    int n,p;
    do{
        printf("Enter 1 to append new record , 2 to delete record , 3 to update , 4 to display file ");
        printf("\n Enter choice : ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:append();
        break;
        case 2:delet();
        break;
        case 3:modify();
        break;
        case 4:display();
        break;

        }
        printf("Press 5 to continue : ");
        scanf("%d",&p);
    }while(p==5);
return 0;
}
