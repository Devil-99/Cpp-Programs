#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char ch1[10],ch2[10];
    int diff,i; //i=0;

    scanf("%s%s",ch1,ch2);

    for(i=0;ch1[i]!='\0' || ch2[i]!='\0';i++) //while(ch1[i]!='\0' || ch2[i]!='\0')
    {
        diff=ch1[i]-ch2[i];
        printf("%d\n",diff);
     if(diff>0)
       {printf("1st one is bigger");
       break;}
     else if(diff<0)
        {printf("2nd one is bigger");
            break;}
            //i++;
    }
    return 0;
}
