#include <stdio.h>
#include <stdlib.h>

int main()
{
    int magic,guess;
    magic=rand();
    scanf("%d",&guess);
    printf("%d\n%d",magic,guess);
    return 0;
}
