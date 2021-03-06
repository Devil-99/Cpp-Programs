#include <stdio.h>
#include <stdlib.h>
int fun(int n)
{
    if(n==0)
        return 0;
    else
        return ((n%10) + fun(n/10));

}

int main()
{
    int n;
    scanf("%d",&n);
    int sum=fun(n);
    printf("%d",sum);
    return 0;
}
