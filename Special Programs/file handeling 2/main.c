#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100],a[100];
    FILE *ptr1,*ptr2;
    int p,ch;
    while(1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
        case 1://opening
            ptr1=fopen("test.txt","w");
            if(ptr1==NULL)
                printf("Cannot open file1\n");
            else
                printf("Succesfully opened file1\n");
            ptr2=fopen("test2.txt","w");
            if(ptr2==NULL)
                printf("Cannot opne file2\n");
            else
                printf("Successfully opened file2\n");
            break;
        case 2://read contents from file1
            ptr1=fopen("test.txt","r");
            ptr2=fopen("test2.txt","w");
            fgets(a,99,ptr1);
            fputs(a,ptr2);
        case 3:
            remove("test.txt");
        case 5:
            exit(1);
        }
    }
    return 0;
}
