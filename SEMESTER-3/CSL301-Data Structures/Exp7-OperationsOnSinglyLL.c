//Vivek Shivakumar Hotti: SE-COMPS-Roll-32; 21-10-2020 (Wednesday)
//Experiment 07: Write a program to perform different operations on singly linked lists.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct node
{
int data;
struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_pos(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
int main(int argc, char *argv[]) {
int option;
do
{
printf("\n\n *****MAIN MENU *****");
printf("\n 1: Create a list");
printf("\n 2: Display the list");
printf("\n 3: Add a node at the beginning");
printf("\n 4: Add a node at the end" );
printf("\n 5: Add a node at a given position");
printf("\n 6: Delete a node from the beginning");
printf("\n 7: Delete a node from the end");
printf("\n 8: Delete a given node");
printf("\n 9: EXIT");
printf("\n\n Enter your option : ");
scanf("%d", &option);
switch(option)
{
case 1: start = create_ll(start);
printf("\n LINKED LIST CREATED");
break;
case 2: start = display(start);
break;
case 3: start = insert_beg(start);
break;
case 4: start = insert_end(start);
break;
case 5: start = insert_pos(start);
break;
case 6: start = delete_beg(start);
break;
case 7: start = delete_end(start);
break;
case 8: start = delete_node(start);
break;
}
}while(option !=9);
getch();
return 0;
}

//Creation of a new linked list.
struct node *create_ll(struct node *start)
{
struct node *new_node, *ptr;
int num;
printf("\n Enter 0 to end");
printf("\n Enter the data : ");
scanf("%d", &num);
while(num!=0)
{
new_node = (struct node*)malloc(sizeof(struct node)
);
new_node -> data=num;
if(start==NULL)
{
new_node -> next = NULL;
start = new_node;
}
else
{
ptr=start;

while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next = new_node;
new_node->next=NULL;
}
printf("\n Enter the data : ");
scanf("%d", &num);
}
return start;
}

//Displaying of the creatted linked list
struct node *display(struct node *start)
{
struct node *ptr;
ptr = start;
while(ptr != NULL)
{
printf("\t %d", ptr -> data);
ptr = ptr -> next;
}
return start;
}

//Inserting a node at the beginnig of the linked list
struct node *insert_beg(struct node *start)
{
struct node *new_node;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node *)malloc(sizeof(struct node
));
new_node -> data = num;
new_node -> next = start;
start = new_node;
return start;
}

//Inserting a node at the end of a linked list
struct node *insert_end(struct node *start)
{
struct node *ptr, *new_node;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (struct node *)malloc(sizeof(struct node
));

new_node -> data = num;
new_node -> next = NULL;
ptr = start;
while(ptr -> next != NULL)
ptr = ptr -> next;
ptr -> next = new_node;
return start;
}

//Inserting a node, before a node in a linked list
struct node *insert_pos(struct node *start)
{
struct node *new_node, *ptr, *preptr, *temp;
int i, pos;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Out of Memory Space\n");
return start;
}
printf("\n Enter the position for the new node to be inserted: \t");
scanf("%d", &pos);
printf("\n Enter the data value of the node: \t");
scanf("%d", &temp->data);
temp->next=NULL;
if(pos==0)
{
temp->next=start;
start=temp;
}
else
{
for(i=0,ptr=start;i<pos-1;i++)
{
ptr=ptr->next;
if(ptr==NULL)
{
printf("\n Position not found:\n");
return start;
}
}
temp->next=ptr->next;
ptr->next=temp;
}
}

//Deletion of the first node in a linked list

struct node *delete_beg(struct node *start)
{
struct node *ptr;
ptr = start;
start = start -> next;
free(ptr);
return start;
}
struct node *delete_end(struct node *start)
{
struct node *ptr, *preptr;
ptr = start;
while(ptr -> next != NULL)
{
preptr = ptr;
ptr = ptr -> next;
}
preptr -> next = NULL;
free(ptr);
return start;
}

//Deleting of a specified node in a linked list.
struct node *delete_node(struct node *start)
{
struct node *ptr, *preptr;
int val;
printf("\n Enter the value of the node which has to be deleted : ");
scanf("%d", &val);
ptr = start;
if(ptr -> data == val)
{
start = delete_beg(start);
return start;
}
else
{
while(ptr -> data != val)
{
preptr = ptr;
ptr = ptr -> next;
}
preptr -> next = ptr -> next;
free(ptr);
return start;
}
}