#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    char ch[5]={'a','b','c','d','e'};
    int a[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++){
    int c=&a[i];
    int d=&ch[i];
    printf("%d\n\n",c);
    printf("%d\n",d);}
    return 0;
}*/
{
    int x=4,*px;
    px=&x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",&px);
    printf("%d\n",*px);
    return 0;
}
