#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char c;
    float f;
    double d;
    wchar_t wc;
    printf("%d\n",sizeof(a)); //4
     printf("%d\n",sizeof(c)); //1
      printf("%d\n",sizeof(f)); //4
       printf("%d\n",sizeof(d)); //8
        printf("%d",sizeof(wc)); //2

    return 0;
}
