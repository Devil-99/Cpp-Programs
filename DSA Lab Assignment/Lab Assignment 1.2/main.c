#include <stdio.h>
#include <stdlib.h>

int main()
{
while(1)
{
    printf("choice 1 for checking prime:\n");
    printf("choice 2 for checking armstrong:\n");
    printf("choice 3 for checking largest among 3:\n");
    printf("choice 4 for exit:\n");
    printf("Enter your choice:\n");
    int choice;
    scanf("%d",&choice);
    int n,count,r,sum=0,num,a,b,c,mx;
    switch(choice)
    {
    case 1:
        printf("Enter the number to find whether prime or not:\n");
        count=0;
        scanf("%d",&n);
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count!=0)
            printf("The number is not prime\n");
        else
            printf("The number is prime\n");
        break;
    case 2:
        printf("Enter the number whether it is Armstrong or not:\n");
        scanf("%d",&n);
        num=n;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(sum==num)
            printf("The number is Armstong\n");
        else
            printf("The number is not Armstrong\n");
        break;

    case 3:
        printf("Enter 3 numbers to find the largest:\n");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
    {
        if(a>c)
            mx=a;
        else
            mx=c;
    }
    else
    {
        if(b>c)
            mx=b;
        else
            mx=c;
    }
    printf("The largest no is:%d\n",mx);
        break;

   case 4:
       printf("*Your program is terminated*\n");
       return 0;
    }
}
    return 0;
}
