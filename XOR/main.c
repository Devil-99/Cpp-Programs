#include <stdio.h>
#include <stdlib.h>

/*int xor(int a,int b);

int main(void)
{
   printf("%d",xor(1,0));
   printf("%d",xor(1,1));
   printf("%d",xor(0,1));
   printf("%d",xor(0,0));
    return 0;
*/
int main()
{
    int target ,source;
    int *m;

    source=10;
    m=&source;
    target=*m;

    printf("%d\n",m);
    printf("%d",target);
    return 0;
}
