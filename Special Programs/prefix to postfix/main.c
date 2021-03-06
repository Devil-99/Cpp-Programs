#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
char infix[SIZE];
char postfix[SIZE];
char stack[SIZE];
int top=-1;
void push(char ch)
{
    top++;
    stack[top]=ch;
    return;
}
char pop()
{
    char ch;
    ch=stack[top];
    top--;
    return ch;
}

int priority(char op)
{
    switch(op)
    {
        case '^':return 5;
        case '*':return 4;
        case '/':return 4;
        case '+':return 3;
        case '-':return 3;
        case '(':return 1;
        case ')':return 1;
    }
}

int main()
{
    int i=0,j=0;
    char ch;
    gets(infix);
    while(infix[i])
    {
        ch=infix[i];
        switch(ch)
        {
            case '(':
                   push(ch);
                   break;
            case '^':
            case '*':
            case '/':
            case '+':
            case '-':
                while(priority(ch)<=priority(stack[top]))
                    postfix[j++]=pop();
                push(ch);
                break;
            case ')':
                do
                {
                    postfix[j++]=pop();
                }
                while(stack[top]!='(');
                pop();
                break;
            default:
                postfix[j++]=ch;
        }
        i++;
    }
    postfix[j]=0;
    for(int k=0;postfix[k]!=0;k++)
        printf("%c",postfix[k]);
    return 0;
}
