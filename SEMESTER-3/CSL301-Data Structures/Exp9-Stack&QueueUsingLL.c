//Vivek Shivakumar Hotti: SE-COMPS-Roll-32; 30-10-2020 (Friday)
#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
}*top = NULL;
void push(int);
void pop();
void display();
int main()
{
int choice, value;
printf("\n \t IMPLEMENTATION STACKS USING LINKED LISTS \t \n");
while(1){
printf("1. Push\n2. Pop\n3. Display\n4.Exit\n");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\nEnter the value to be inserted: ");
scanf("%d", &value);
push(value);
break;
case 2: pop();
break;
case 3: display();
break;
case 4: printf("EXIT SUCCESSFULL!");
exit(0);
break;
default: printf("\nInvalid Choice\n");
}}}
void push(int value)
{
struct Node *newNode;
newNode = (struct
Node*)malloc(sizeof(struct Node));
newNode->data = value;
if(top == NULL)newNode->next = NULL;

else
newNode->next = top;
top = newNode;
printf("Node is Inserted successfully\n\n");
}
void pop()
{
if(top == NULL)
printf("\nEMPTY STACK\n");
else{
struct Node *temp = top;
printf("\nPopped Element : %d", temp->data);
printf("\n");
top = temp->next;
free(temp);
}}
void display()
{
if(top == NULL)
printf("\nEMPTY STACK\n");
else
{
printf("The stack is \n");
struct Node *temp = top;
while(temp->next != NULL){
printf("%d--->",temp->data);
temp = temp -> next;
}
printf("%d--->NULL\n\n",temp->data);
}
}