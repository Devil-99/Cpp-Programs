#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin,*fout;
    fin=fopen("balloons.ascii.pgm","r");
    if(fin==NULL)
        printf("Unable to open\n");
    else
        {
            fout=fopen("new.pgm","w");
            char s[100];
            int x,i=0;
            while(i<4)
            {
                fgets(s,99,fin);
                fputs(s,fout);
                i++;
            }
            while(!feof(fin))
            {
                fscanf(fin,"%d",&x);
                x=255-x;
                fprintf(fout,"%d\n",x);
            }
            fclose(fin);
            fclose(fout);
        }
    return 0;
}
