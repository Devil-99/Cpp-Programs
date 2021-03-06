#include <stdio.h>
#include <stdlib.h>

typedef struct node
    {
        int data;
        struct node *link;
    }nd;
nd* start=NULL;
void create()
{
    nd *ptr;
    ptr=(nd*)malloc(sizeof(nd));
    printf("Enter the data\n");
    scanf("%d",&ptr->data);
    start=ptr;
    printf("Do you want to continue 1/0: ");
    int ch;
    scanf("%d",&ch);
    while(ch!=0)
    {
        ptr->link=(nd*)malloc(sizeof(nd));
        ptr=ptr->link;
        printf("Enter the data\n");
        scanf("%d",&ptr->data);
        printf("Do you want to continue? 1/0: ");
        scanf("%d",&ch);
    }
    ptr->link=NULL;
}
void display(nd *start)
{
    nd* ptr=start;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
void reverse(nd* start)
{
    nd* ptr=start;
    if(ptr!=NULL)
    {
        reverse(ptr->link);
        printf("%d->",ptr->data);
    }
}
void search(nd* start,int x)
{
    int c=1;
    nd* ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->data==x)
        {
            printf("The number exist in %dth position\n",c);
            return;
        }
        ptr=ptr->link;
        c++;
    }
    printf("The number does not exist in the list\n");
}
void insert(nd* start,int pos)
{
    int c=1;
    nd* ptr=start,* next;
    if(pos==1)
    {
        //next=ptr->link;
        nd* newn=(nd*)malloc(sizeof(nd));
        //ptr=start;
        printf("Enter the value:");
        scanf("%d",&newn->data);
        newn->link=ptr;
        start=newn;
    }
    else
    {
        while(ptr!=NULL)
        {
            next=ptr->link;
            if(c==pos-1)
            {
                ptr->link=(nd*) malloc(sizeof(nd));
                ptr=ptr->link;
                printf("Enter the value:");
                scanf("%d",&ptr->data);
                ptr->link=next;
            }
            ptr=ptr->link;
            c++;
        }
        if(pos>c)
            printf("Invalid\n");
    }
}
void delete(nd* start,int key)
{
    nd* ptr=start,* prev;
    int c=2;
    if(key==1)
    {
        start=ptr->link;
        free(ptr);
    }
    else
    {
        while(ptr!=NULL)
        {
            prev=ptr;
            ptr=ptr->link;
            if(key==c)
            {
                prev->link=ptr->link;
                free(ptr);
            }
            c++;
        }
    }
}
//Main function
int main()
{
    int ch,x,pos;
    while(1)
    {
        printf("1.Create\n2.Display\n3.Reverse Display\n4.Searching\n5.Insert\n6.Delete\n0.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            display(start);
            printf("NULL\n");
            break;
        case 3:
            reverse(start);
            printf("NULL\n");
            break;
        case 4:
            printf("Enter the number you want to search:");
            scanf("%d",&x);
            search(start,x);
            break;
        case 5:
            printf("Enter the position you want to insert:");
            scanf("%d",&pos);
            insert(start,pos);
            break;
        case 6:
            printf("Enter the position you want to delete:");
            scanf("%d",&pos);
            delete(start,pos);
            break;
        case 0:
            exit(1);
        }
    }
    return 0;
}
