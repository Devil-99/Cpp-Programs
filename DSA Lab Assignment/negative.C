#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *rfile;
    char s[100];
    printf("Enter .PGM file name :: ");
    scanf("%[^\n]s",s);
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    s[i++] = '.',s[i++]='p',s[i++]='g',s[i++]='m',s[i]='\0';
    rfile = fopen(s,"r");
    if(rfile == NULL)
    {
        printf("Unable to open file %s",s);
        return 0;
    }
    char temp[10];
    temp[0]='\n\n\0';
    int curpos = 0;
    while(temp[0]<'0'||temp[0]>'9')
    {
        printf("%s",temp);
        curpos = ftell(rfile);
        fscanf(rfile,"%s",temp);
    }
    fseek(rfile,curpos,SEEK_SET);
    int row,col,maxi=0;
    fscanf(rfile,"%d %d",&col,&row);
    printf("\nDimension : %d X %d px",col,row);
    fscanf(rfile,"%d",&maxi);
    printf("\nMax value :: %d\n",maxi);

    char ns[100];
    printf("\nEnter .PGM file name(To Write In) :: ");
    fflush(stdin);
    scanf("%[^\n]s",ns);
    i=0;
    while(ns[i]!='\0')
    {
        i++;
    }
    ns[i++] = '.',ns[i++]='p',ns[i++]='g',ns[i++]='m',ns[i]='\0';

    printf("\nPress enter to convert %s to %s in negative",s,ns);
    _getch();
    printf("\r                                                                     ");
    int j=0;
    maxi=0;
    int val;
    FILE *wfile;
    wfile = fopen(ns,"w");
    printf("\r\nWriting In file %s.\nThis may take sometime for big files.\nPlease wait do not close the window\n\n",ns);
    fprintf(wfile,"P2\n%d %d\n255\n",col,row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\rProcessing row : %d",i+1);
            fscanf(rfile,"%d",&val);
            val=255-val;
            fprintf(wfile,"%d\n",val);
            if(val>maxi)
                maxi=val;
        }
    }
    printf("\rCompleted %d rows                     \n\n",row);
    return 0;

}
