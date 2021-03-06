#include <stdio.h>
#include <stdlib.h>

/*int main()
{
  int n,r,c=0;
  scanf("%d",&n);
  while(n)
  {
      r=n%2;
      if(r==1)
        c++;
      n=n/2;
  }
  printf("%d",c);
    return 0;
}*/

//2nd process;

int bitcount(unsigned int n)
{
    int b;
    scanf("%d",&n);
    for(b=0;n!=0;n>>1)
    {
        if(n & 01)
            b++;
    }
    printf("%d",b);
    return b;
}
int main()
{
    int n;
     bitcount(n);
    return 0;
}
