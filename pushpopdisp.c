#include <stdio.h>
int stack[4];
int top = -1;

void pop();  

void push();

void display();

void main()
{
	int ch;
	do
	{
		printf("\nEnter 1 for Pop Element\nEnter 2 for Push Element\nEnter 3 for Display Elements\nEnter 4 for Exit\n");
		scanf("%d",&ch);
	    
	    switch(ch)
	    {
	    	case 1 : pop();
	    	break;
	    	
	    	case 2 : push();
	    	break;
	    	
	    	case 3 : display();
	    	break;
	    	
	    	case 4 : printf("END");
	    	break;
	    	
	    	default : printf("Invalid Input");
	    }
	}
	while(ch!=4);
}

void pop()
{
	if(top==-1)
		printf("The stack is empty\n");
	else
		top--;
}

void push ()
{
	if(top==3)
		printf("The stack is full\n");
	else
		top++;
		printf("Enter the Number you want to Push");
		scanf("%d",&stack[top]);
}


void display()
{
	int i;
	if(top==-1)
		printf("The stack is empty\n");
	else
		for(i=0;i<=top;i++)
			printf("[%d],", stack[i]);	
}