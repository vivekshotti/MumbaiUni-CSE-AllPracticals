//Vivek Shivakumar Hotti: SE-COMPS-Roll-32; 19-10-2020 (Monday)
//Experiment 04: Evaluation of postfix operation
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 30
float stack[MAX];
int top=-1;
void push(float);
float pop();
void main(){
int i;
char st[50],ch;
float a,b,result;
printf("\n \t Please Enter a postfix exp: \t");
gets(st);
for(i=0;i<strlen(st);i++)
{
ch=st[i];
if(isdigit(ch))
{
push((float)(ch)-48);
} // this is the endingof if statement

else
//if(ch=="+"||ch=="-"||...)
{
b=pop();

a=pop();
if(ch=='+')
result=a+b;
if(ch=='-')
result=a-b;
if(ch=='*')
result=a*b;
if(ch=='/')
result=a/b;
push(result);
}
}
printf("\n The answer to the expression is %.2f",pop());
getch();
}
void push(float x)
{
stack[++top]=x;
}
float pop()
{
return stack[top--];
}