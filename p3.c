#include <stdio.h>
#include <stdlib.h>
# define max 5
int top = -1, st [max];
void push();
void pop();
void peek();
void display ();
void exit();
int main()
{
int choice;
while (1)
{
printf("\n Perform operations on stack :");
printf("\n 1. Push \n 2. POP \n 3. Peek \n 4. Display \n 5. Exit");
printf("\n Enter the choice: ");
scanf ("%d", &choice);
switch (choice)
{
case 1: push ();
break;
case 2: pop ();
break;
case 3: peek ();
break;
case 4: display();
break;
case 5: exit (0);

break;
default: printf(" \n Invalid choice");
}
}
}
void push ()
{
int x;
if(top == max-1)
printf("\n Overflow");
else
{
printf ("\n Enter the element to be added onto the stack: ");
scanf("%d", &x);
top = top +1;
st[top] = x;
}
}
void pop ()
{
if ( top == -1)
printf ("\n Underflow ");
else
{
printf("\n Popped element: %d", st[top]);
top = top-1;
}
}
void peek()
{
if (top == -1)
printf ("Stack is empty");
else
printf("The element is: %d", st[top]);
}
void display()
{
if ( top == -1)
printf ("\n Underflow");
else
printf ("\n Elements present in the stack:");
for(int i = top; i>=0; i--)
printf("%d\n", st[i]);
}
