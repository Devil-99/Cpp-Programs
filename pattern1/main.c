#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}
