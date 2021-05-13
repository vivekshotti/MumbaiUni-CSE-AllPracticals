//Vivek Shivakumar Hotti: SE-COMPS-Roll-32; 19-10-2020 (Monday)
//Experiment 03: Infix to postfix operation
#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[20];
int top=-1;
void push(char);
char pop();
char peek();
int priority(char);
void main()
{
char infix[50],ch,waste;
int i;
printf("\n\t\t----- Infix to Postfix expression program -----\n");
printf("\nEnter your infix expression:");
gets(infix);
printf("\n Equivalent Postfix expression is:\n");
for(i=0;i<=strlen(infix);i++)
{
//scanning the term
ch=infix[i];
//if ch is an alphabet
if(isalnum(ch))
printf("%c",ch);
//if ch is a open bracket
if(ch=='(')
{
push(ch);
}
//if ch is a closing bracket
if(ch==')')
{
ch=pop();
while(ch!='(')
{
printf("%c",ch);
ch=pop();
}
waste=pop();
}

//if ch is an operator
else
{
waste=peek();
if(priority(waste)>priority(ch))
printf("%c",pop());
else
push(ch);
}
}
getch();
}
void push(char X)
{
//is full function
if(top==19)
printf("\nStack is full");
else
stack[++top]=X;
}
char pop()
{
//is empty function
if(top==-1)
printf("\nStack is empty");
else
return stack[top--];
}
char peek()
{
return stack[top];
}
int priority(char data)
{
if(data=='^')
return 3;
else if(data=='*'||data=='/')
return 2;
else if(data=='+'||data=='-')
return 1;
else
return 0;
}