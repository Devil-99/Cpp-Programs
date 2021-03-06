#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    FILE *fp;
    int choice;
    while(1){
        printf("Press 0 to open the file \nPress 1 to read a text file \nPress 2 to write a string to the file \nPress 3 to close the file \nPress 4 to exit \n");
        scanf("%d",&choice);
    switch(choice)
    {
    case 0:
        fp=fopen("souvik.txt","r");
         if(fp==NULL)
        {
            printf("Error!Opening file");
            exit(1);
        }
        break;
    case 1:
        fscanf(fp,"%[^\n]",&str);
        printf("The text is :-> %s",str);
        printf("\n");
        break;
    case 2:
        /*fp=fopen("E:\\souvik.txt","w");
        if(fp==NULL)
        {
            printf("Error!");
            exit(1);
        }*/
        printf("Enter string:\n");
        //scanf("%s",&str);
        scanf("%s",&str);
        fprintf(fp,"%s",str);
        break;
    case 3:
        fclose(fp);
        break;
    case 4:
        exit(1);
   }
    }
    return 0;
}
