#include <stdio.h>
#define MAXSIZE 30

struct stack
{
    char stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK values;
STACK operators;

void push (STACK s,num)
{
    char num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
char pop (STACK s)
{
    char num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        s.top = s.top - 1;
    }
    return(num);
}
void display (STACK s)
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}

int main ()
{
    int choice,i=0;
    int option = 1;
    values.top = -1;
    operators.top = -1;
    char expression[30];
    scanf("%d",expression);
    while(i<strlen(expression))
    {
    	if(expression[i]=='+'||expression[i]=='-'||expression[i]=='*'||expression[i]=='/')
    		push(operators,expression[i])
    	else
    		push(values,expression[i])
    	i++;
    }
    return 0;
}
