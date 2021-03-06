#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j>=5-i)
            printf("%d ",i);     //try this too printf("%d ",i);
            else
                printf(" ");

    }
    printf("\n");
    }
    return 0;
}
