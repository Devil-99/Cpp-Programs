#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 50
char postfix[SIZE];
int stack[SIZE];
int top=-1,y;
void push(int ch)
{
    top++;
    stack[top]=ch;
}
int pop()
{
    if(top>-1)
    {
        y=stack[top];
        top--;
        return y;
    }
}

int main()
{
    char ch;
    int i=0,op1,op2,res,x,p=0,ans;
    gets(postfix);
    while(postfix[i])
    {
        ch=postfix[i];
        switch(ch)
        {
            case ' ':
                p=0;
                break;
            case '*':
                op1=pop();
                op2=pop();
                res=op1*op2;
                push(res);
                break;
            case '/':
                op1=pop();
                op2=pop();
                res=op2/op1;
                push(res);
                break;
            case '+':
                op1=pop();
                op2=pop();
                res=op1+op2;
                push(res);
                break;
            case '-':
                op1=pop();
                op2=pop();
                res=op2-op1;
                push(res);
                break;
            case '^':
                op1=pop();
                op2=pop();
                res=pow(op2,op1);
                push(res);
                break;
            default:
                x=ch-'0';
                p=(p*10)+x;
                push(p);
        }
        i++;
    }
    ans=pop();
    printf("%d",ans);
    return 0;
}
