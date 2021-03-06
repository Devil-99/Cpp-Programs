#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;    //declaration of a file
   int num,n;
   int choice;
   while(1){
    printf("\nPress 1 to read a binary file \n Press 2 to write a number to the file\n Press 3 to exit\n");
    scanf("%d",&choice);
    switch(choice)
    {

   case 1:
    //reading the num file.
  fp=fopen("File2.bin","rb");   //create a new file or open it if exist
   if(fp==NULL)
    printf("File failed to open\n");
   else
   {
       printf("The file is now opened\n");
       fread(&num,sizeof(num),1,fp);  //reading the binary file
        printf("%d",num);
   }
   fclose(fp);
   break;

   case 2:
    //writing str in the file
   fp=fopen("File2.bin","wb");
   if(fp==NULL)
    printf("File failed to open\n");
   else
   {
       scanf("%d",&num);
       fwrite(&num,sizeof(num),1,fp);
   }
   fclose(fp);
   break;

   case 3:
    exit(1);

   case 4:
    n=fprintf(fp,"%d",num);
    printf("%d",n);
    fclose(fp);
    break;
    }}
    return 0;
}
