#include <stdio.h>
#include <stdlib.h>
int n,a[1000];
int LSearch(int val)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==val)
         return i;
    return -1;
}
int BSearch(int val)
{
   int ub=n-1,lb=0,mid;
   while(ub>=lb)
   {
       mid=(lb+ub)/2;
       if(a[mid]>val)
         lb=mid+1;
       else if(a[mid]<val)
         ub=mid-1;
       else
         return mid;
   }
   return -1;
}
void Insert(int val,int pos)
{
    if(pos<0||pos>n)
        printf("Invalid position\n");
    else
    {
        int i;
        for(i=n-1;i>=pos-1;i--)
            a[i+1]=a[i];
        a[pos-1]=val;
        n++;
        printf("The element %d has been inserted at %d position\n",val,pos);
    }
}
void DeletePos(int pos)
{
    if(pos>n-1)
        printf("Invalid position\n");
    else
    {
        int i,val=a[pos];
        for(i=pos;i<n;i++)
            a[i]=a[i+1];
        n--;
        printf("The element in position %d with value %d has been deleted\n",pos,val);
    }
}
void DeleteVal(int val)
{
    int pos=-1,i;
    for(i=0;i<n;i++)
        if(a[i]==val)
         {
             pos=i;
             break;
         }
      if(pos>-1)
       DeletePos(pos);
      else
       printf("Invalid value\n");
}
int main()
{
    int c=1,i,pos,val,x;
     while(1)
    {
        printf("ENTER \n1.To Create Arrey\n2.To Display\n3.Linear Search\n4.Binary Search\n5.Insertion operation\n6.Deletion Operation by position\n7.Deletion Operation by value\n8.TO EXIT\n");
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
                   printf("Enter the value to be searched:\n");
                   scanf("%d",&val);
                   pos=LSearch(val);
                   if(pos>-1)
                     printf("%d is present at index %d of the array:\n",val,pos);
                   else
                     printf("Element is not present in array\n");
                   break;
        case 4:
                   printf("Enter the value to be searched:\n");
                   scanf("%d",&val);
                   pos=BSearch(val);
                   if(pos>-1)
                     printf("%d is present at index %d of the array:\n",val,pos);
                   else
                     printf("Element is not present in array\n");
                   break;
        case 5:
                    printf("Enter the value to be inserted:\n");
                    scanf("%d",&val);
                    printf("Enter the position where the element is to be inserted\n");
                    scanf("%d",&pos);
                    Insert(val,pos);
                    break;
        case 6:
                   printf("Enter the position of the element to be deleted:\n");
                   scanf("%d",&pos);
                   DeletePos(pos);
                   break;
        case 7:
                   printf("Enter the value of the element to be deleted:\n");
                   scanf("%d",&val);
                   DeleteVal(val);
                   break;
         case 8:exit(0);
                   break;
         default:printf("Invalid option\n");
        }
    }
    return 0;
}
