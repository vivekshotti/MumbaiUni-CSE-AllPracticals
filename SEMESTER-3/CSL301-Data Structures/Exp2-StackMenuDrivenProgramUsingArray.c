//Vivek Shivakumar Hotti: SE-COMPS-Roll-32; 14-10-2020 (Wednesday)
//Experiment 02: Write a program to implement stack menu driven program using array.
#include<stdio.h>
#include<conio.h>
#define MAX 5
int top = -1;
int st[MAX];
void push(int[],int);
int pop(int[]);
int peep(int[]);
void display(int[]);
int main()
{
int choice, X;
do{
printf("\n----MENU-----");
printf("\n1. Push");
printf("\n2. Pop");
printf("\n3. Peep");
printf("\n4. Display");
printf("\n5. Exit \n");
scanf("\n%d",&choice);
switch(choice)
{
case 1: printf("Enter the value you want to be pushed in the stack: ");
scanf("%d",&X);
push(st,X);
break;
case 2: X = pop(st);
if(X==-1)
printf("\n Stack is empty");
else
printf("\n Poped value= %d",X);
break;
case 3: X = peep(st);
if(X==-1)
printf("\n Stack is empty");
else
printf("\n Peeped value= %d",X);
break;
case 4: display(st);break;

case 5: break;
default: printf("\n Enter valid choice: ");}
}while(choice!=5);
getch();}
void push(int st[],int X)
{
if(top == MAX-1)
printf("Stack is full");
else{
top++;
st[top] = X;
printf("\n Value is pushed");
}
}
int pop(int st[])
{ int t;
if(top==-1)
return -1;
else{
t = st[top];
top--;
return t;
}
}
int peep(int st[])
{
if(top==-1)
return -1;
else
return st[top];
}
void display(int st[])
{
int i;
if(top==-1)
printf("Stack is empty");
else
{
for(i=top;i>=0;i--)
printf("%d,",st[i]);}}