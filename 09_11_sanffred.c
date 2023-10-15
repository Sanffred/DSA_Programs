/* 
    SANFFRED JOJU
    ROLL NUMBER - 09
    BATCH - A
*/

// Array Implementation of Stack 

#include <stdio.h>
#include <stdlib.h>

int stack[5];
int top=-1;

void push(int); // function prototype 

void pop(); // function prototype 

void display(); // function prototype 

void main(){

    int ch;
    int n1;

    while(1){

        printf("\n----------Stack operation----------");
        printf("\n1.Push an element into the stack ");
        printf("\n2.Delete an element from the stack");
        printf("\n3.Display all the elemnets in the stack");
        printf("\n4.Exit");

        printf("\nEnter your choice");
        scanf("\n%d",&ch);

        switch (ch)
        {
        case 1: printf("Enter the element to be added to the stack");
                scanf("%d",&n1);
                push(n1);
            break;
        case 2: printf("Deleting...........\n");
                pop();
            break;
        case 3: display();
            break;
        case 4: exit(1);
            break;
        
        default: printf("wrong choice");
            break;
        }
    }
}


void push(int x){
    if(top==4){ // stack full condition 
        printf("\nstack is full");
    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    if(top==-1){  // stack empty condition 
        printf("\nStack is emplty");
    }
    else{
        int a=stack[top];
        top--;
        printf("\n %d has been deleted from the stack",a);
    }
}

void display(){
    int i;
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("\nThe stack elements are");
        for(i=top;i>=0;i--){
            printf("\n %d",stack[i]);
        }
    }
}
