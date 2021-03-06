/*Modes:
    1.r= If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it.
    2.w= If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created.
    3.a= If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it.
    Returns NULL, if unable to open file.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp;    //declaration of a file
   char str[100];

  //writing str in the file
 fp=fopen("File1.txt","w");
   if(fp==NULL)
    printf("File failed to open\n");
   else
   {
       printf("File is open\nData is read\n");
       gets(str);
       fputs(str,fp);
   }
   fclose(fp);

   //reading the str file using fgets() method
  fp=fopen("File1.txt","r");   //create a new file or open it if exist
   if(fp==NULL)
    printf("File failed to open\n");
   else
   {
       printf("The file is now opened\n");
       fgets(str,99,fp);  //reading the file
        printf("%s",str);
   }
   fclose(fp);

    return 0;
}
