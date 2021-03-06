#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    while(1)
    {
        a++;
        if(a<0)
            break;
    }
    printf("%d\n",a-1); //2147483647
    unsigned int b;
     while(1)
    {
        b++;
        if(b<0)
            break;
    }
    printf("%d\n",b-1);
    long int c;
     while(1)
    {
        c++;
        if(c<0)
            break;
    }
    printf("%d\n",c-1);
    long long int d;
     while(1)
    {
        d++;
        if(d<0)
            break;
    }
    printf("%d\n",d-1);
    short int e;
     while(1)
    {
        e++;
        if(e<0)
            break;
    }
    printf("%d\n",e-1);
    return 0;
}
