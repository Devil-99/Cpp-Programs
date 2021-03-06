#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fptr1,*fptr2;
   char c;
   int choice;

   while(1)
   {
       printf("Press 1 to open the file\nPress 2 to read the content of the file\nPress 3 to copy the content of one file to another\nPress 4 to exit\n");
       scanf("%d",&choice);
       switch(choice){
    case 1:
        // Open file
        fptr1 = fopen("E:\DSA Lab Assignment\reading text file\\souvik.txt", "r");
        if (fptr1 == NULL)
        {
            printf("Cannot open file1 \n");
            exit(1);
        }
        fptr2=fopen("E:\DSA Lab Assignment\file handling\\File1.txt","w");
        if(fptr2==NULL)
        {
            printf("Cannot open file2 \n");
            exit(1);
        }
        break;
    case 2:
        // Read contents from file1
        c = fgetc(fptr1);
        while (c != EOF)
        {
            printf ("%c", c);
            c = fgetc(fptr1);
        }
        printf("\n");
        fclose(fptr1);
        break;
    case 3:
        //copy content of file1 to file2.
        c=fgetc(fptr1);
        while(c!=EOF)
        {
            fputc(c, fptr2);
            c = fgetc(fptr1);
        }
        break;
    case 4:
        exit(1);
    }}//
    return 0;
}
