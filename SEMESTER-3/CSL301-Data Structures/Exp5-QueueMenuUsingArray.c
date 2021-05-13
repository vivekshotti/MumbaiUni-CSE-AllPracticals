//Vivek Shivakumar Hotti: SE-COMPS-Roll-32; 19-10-2020 (Monday)
//Experiment 05: Program to implement Queue menu driven program using Array.
#include<stdio.h>
#include<conio.h>
int front=-1,rear=0;
int queue[20];
void enqueue(int);
int dequeue();
void main()
{
printf("\n \t M E N U \t ");
int choice,value,i;
do{
printf("\n\n Enter your choice\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(rear==19)
printf("Queue is full!");
else
{
printf("Enter the value: ");
scanf("%d",&value);
enqueue(value);
}break;
case 2:
if(front==-1)
printf("Queue is empty!");
else
{dequeue();
printf("Element deleted ");
}break;
case 3:

printf("\nThe elements of the queue are:\n");
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
break;
case 4: break;
default: printf("Invalid input");
} } while(choice!=4);
getch();
}
void enqueue(int data)
{ if(front==-1)
{ front=0;
queue[rear]=data;
printf("Value inserted"); }
else
{
queue[++rear]=data;
printf("Value inserted");
}
}
int dequeue()
{
if(front==rear)
{
return queue[front];
front=-1;
rear=0;
}
else
{
return queue[front++];
}}