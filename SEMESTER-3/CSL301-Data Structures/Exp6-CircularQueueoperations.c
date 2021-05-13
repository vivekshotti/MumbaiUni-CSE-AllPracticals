//Vivek Shivakumar Hotti: SE-COMPS-Roll-32; 19-10-2020 (Monday)
//Experiment 06: Program to implement Circualr Queue operations.

#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1;
int queue[5];
void enqueue(int);
int dequeue();
void main()
{
printf("\t MENU driven program for linear queue ");
int choice,value,i;
do{
printf("\n\nEnter your choice\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
if((rear== 4 && front== 0) || rear==front+1)
printf("Queue is full");
else
{
printf("Enter the value: ");
scanf("%d",&value);
enqueue(value);
}
break;
case 2:
if(front==-1)
printf("Queue is empty");
else
{
dequeue();
printf("Element %d deleted ",dequeue());
}
break;
case 3:
printf("\nThe elements of queue are:\n");
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
break;
case 4:
break;

default: printf("Invalid input");
}
} while(choice!=4);
getch();
}
void enqueue(int data)
{
if(front== -1)
{
front=0;
}
if(rear==4)
{
rear=0;
queue[rear]=data;
printf("Value inserted");
}
else
{
queue[++rear]=data;
printf("Value inserted");
}
}
int dequeue()
{
if(front>=rear)
{
return queue[front];
front=rear=-1;
}
if(front==4)
{
front=0;
return queue[front];
}
else
{
return queue[front++];
}
}