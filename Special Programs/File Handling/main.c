#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    FILE *ptr;
    int p,ch;
    while(1)
    {
        printf("1.Create\n2.Write\n3.Read\n4.Close\n5.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1://create
            ptr=fopen("test.txt","r+");
            if(ptr==NULL)
                printf("Cannot open file\n");
            else
                printf("Succesfully opened\n");
            break;
        case 2://write
            fopen("test.txt","w");
            gets(s);
            fputs(s,ptr);
            break;
        case 3://read
            ptr=fopen("test.txt","r");
            fgets(s,99,ptr);
            puts(s);
            break;
        case 4://close
            p=fclose(ptr);
            if(p!=0)
                printf("Failed\n");
            else
                printf("Closed Successfully\n");
            break;
        case 5:
            exit(1);
            break;
        }
    }
    return 0;
}
