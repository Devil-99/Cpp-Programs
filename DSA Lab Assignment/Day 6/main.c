#include <stdio.h>
#include <stdlib.h>
int n,a[100];

int main()
{
    int c=1,pos,val,x,i,j,flag=1;
     printf("ENTER \n1.To Create Arrey\n2.To Display\n3.Selection Sort\n4.Bubble Sort\n5.Modified Bubble Sort\n8.TO EXIT\n");
    while(1)
    {
       scanf("%d",&c);
        switch(c)
        {
        case 1:
                printf("Enter length of array: ");
                scanf("%d",&n);
                printf("Enter the elements of the array: ");
                for(i=0;i<n;i++)
                {
                    scanf("%d",&x);
                    a[i]=x;
                }
                break;
        case 2:
                printf("The array is as follows:-\n");
                for(i=0;i<n;i++)
                    printf("%d ",a[i]);
                printf("\n");
                break;
        case 3:
                for(i=0;i<n-1;i++)
                {
                    pos=i;
                    for(j=i+1;j<n;j++)
                    {
                    if(a[j]<=a[i])
                        pos=j;
                    }
                    if(pos!=i)
                    {a[i]=a[i]+a[pos];
                    a[pos]=a[i]-a[pos];
                    a[i]=a[i]-a[pos];}
                        }
                printf("Selection Sort is done");
                break;
        case 4:
                for(i=0;i<n-1;i++)
                {
                    for(j=0;j<n-i-1;j++)
                    {
                        if(a[j]>a[j+1])
                        {
                            a[j+1]=a[j]+a[j+1];
                            a[j]=a[j+1]-a[j];
                            a[j+1]=a[j+1]-a[j];
                        }
                    }
                }
                printf("Bubble sort is done");
                break;
        case 5:
            for(i=0;i<n-1 && flag;i++)
                {
                flag=0;
                for(j=0;j<n-i-1;j++)
                {
                if(a[j]>a[j+1])
                {
                a[j+1]=a[j]+a[j+1];
                a[j]=a[j+1]-a[j];
                a[j+1]=a[j+1]-a[j];
                flag=1;
                }
                }
                }
                printf("Modified Bubble sort is done");
                break;
        case 8:
                exit(1);
        }
    }
    return 0;
}
