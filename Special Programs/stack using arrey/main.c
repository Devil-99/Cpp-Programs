#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

int stack[SIZE];
int top=-1,c=0;
void push(int ch)
{
    top++;
    c++;
    stack[top]=ch;
    return;
}
int pop()
{
    int ch;
    ch=stack[top];
    top--;
    c--;
    return ch;
}
int main()
{
    int ch;
    int x,y,i;
while(1)
{
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        scanf("%d",&x);
        push(x);
        break;
    case 2:
        y=pop();
    printf("%d",y);
        break;
    case 3:
        for(i=0;i<c;i++)
            printf("%d",stack[i]);
    }
}
    return 0;
}
