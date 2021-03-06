#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n,a=0,b=1,c;
    printf("Enter the number of term:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    int i=0;
    while(i<=n-3)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        i++;
    }
    return 0;
}*/

/*int main()
{
    int n,a=0,b=1,c;
    printf("Enter the number of term:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=0;i<=n-3;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}*/

int main()
{
    int n,a=0,b=1,c,i=0;
    printf("Enter the number of term:");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    do
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        i++;
    }
    while(i<=n-3);
    return 0;
}
