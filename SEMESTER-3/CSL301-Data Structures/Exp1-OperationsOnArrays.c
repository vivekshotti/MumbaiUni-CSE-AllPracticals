//Vivek Shivakumar Hotti : SE-COMPS-Roll-32 ; 13-10-2020 (Tuesday)
//Experiment 01: Write a program to perform different operations on Array.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void create_arr();
void display_arr();
void insert_arr();
void del_arr();
void search_arr();
/*declaring an array of 100 integers,
variable n for the number of elements in the users array
variable i for an intialization variable in loops
variable value for the value of the new element to be inserted in an existing
array
variable position for the position of the new element to be inserted in an
existing array
variable val to compare each value in existing array*/
int arr[100] , n , choice , i , value , position , val;
int main()
{
do{
printf("\n---------MENU---------\n");
printf("1. Create a new array \n");
printf("2. Displaying your array \n");
printf("3. Insering an element in your array \n");
printf("4. Deleting an element from your array \n");
printf("5. Searching an element in your array \n");
printf("6. Exit! \n");
printf("Please enter your choice : ");
scanf("\n %d", &choice);
switch(choice)
{
case 1: create_arr();
break;
case 2: display_arr();
break;
case 3: insert_arr();
break;



case 4: del_arr();
break;
case 5: search_arr();
break;
case 6:
exit(0);
break;
default:
printf("\nInvalid choice:\n");
break;
}
}
while(choice!=6);
return 0;
}
void create_arr()
{
printf("Enter the number of elements in your array: ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("arr[%d] = ", i);
scanf("%d", &arr[i]);
}
}
void display_arr()
{
printf("Displaying array now: ");
for(i=0;i<n;i++)
{
printf("\t %d", arr[i]);
}
}
void insert_arr()
{
printf("\n Enter the value to be inserted: ");
scanf("%d", &value);
printf("\n Enter the position where it is to be inserted");
scanf("%d", &position);
for(i=n-1;i>position;i--)
{
arr[i+1]=arr[i];
}



n=n+1;
arr[position]=value;
}
void del_arr()
{
printf("\n Enter the position where it is to be deleted");
scanf("%d", &position);
for(i=position;i<n-1;i++)
{
arr[i]=arr[i+1];
}
n=n-1;
arr[position]=value;
}
void search_arr()
{
printf("\n Please enter the element to be searched: ");
scanf("%d", &val);
for(i=0;i<n;i++)
{
if(arr[i]==val)
{
printf("The above entered element is present at: %d",i);
break;
}
}
if(i==n)
{
printf("No such element exists");
}
}