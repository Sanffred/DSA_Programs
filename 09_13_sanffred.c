/* 
    SANFFRED JOJU
    ROLL NUMBER - 09
    BATCH - A
*/

// Array implimentation of circular Queue

/* BUGs: 1. The enqueue functions can accept unlimited number of elements even if the size of an array is constant 
         2. The display function too isint working properly as it always shows that queue is empty */


#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int A1[SIZE];
int front,rear;

/* FUNTION PROTOTYPE */

void init();
void enqueue();
void dequeue();
void display();

void main(){
    
    init();
    int option,element;

    while(5){
        printf("\n -----------Queue Operation---------- \n\n");

        printf("\t -----Menue-----\n");
        printf("\n 1. ENQUEUE Operation");
        printf("\n 2. DEQUEUE Operation");
        printf("\n 3. DISPLAY ");
        printf("\n 4. EXIT \n");

        printf("\n Enter the desired operation using their SR number :");
        scanf("%d",&option);

        switch(option){

            case 1: 
                printf("\n Enter the element to be added :");
                scanf("%d",&element);
                enqueue(element);
                break;
            
            case 2: 
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(5);
                break;
        }
    }
}

void init(){
    front=-1;
    rear=-1;
}

void enqueue(int x){

    if((rear==SIZE-1 && front==0) || rear==front-1){

        printf("\n Queue is Full");

    }
    if(front==-1 && rear==-1){
        rear++;
        front++;

        A1[rear]=x;
        printf("\n Element added sucessfully");
    }
    else{

        rear=(rear++)%SIZE;
        A1[rear]=x;
        printf("\n Element added sucessfully");
    }
}

void dequeue(){

    if(rear==-1 && front==-1){
        printf("\n Queue is empty");
    }
    else if(front==rear){
        printf("\n Queue is empty");
        front=rear=-1;
    }
    else{
        front=(front++)%SIZE;
        printf("\n Elemnet deleted sucessfully");
    }
}

void display(){

    if((rear==-1 && front==-1) || front==rear){
        printf("\n Queue is empty");
    }
    else{
        for(int i=front;i<rear;i++){
            printf("\n\t %d",A1[i]);
        }   
    }
}
