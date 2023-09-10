/* 
    SANFFRED JOJU
    ROLL NUMBER - 09
    BATCH - A
*/

// Array implementation of queue

// bug : when the menue is displayed and when pressed 1 to enqueue after entering the element to enqueue the program somehow terminates

#include <stdio.h>
#include <stdlib.h>
 
int SIZE;

void enqueue(); 

void dequeue();

void display();


void main(){

    int rear=-1;
    int front=-1;

    int option;

    printf("\n Enter the size of the array : ");
    scanf("%d",&SIZE);

    int A1[SIZE];

    while(4)
    {
        printf("\n -----------Queue Operation---------- \n\n");

        printf("\t -----Menue-----\n");
        printf("\n 1. ENQUEUE Operation");
        printf("\n 2. DEQUEUE Operation");
        printf("\n 3. DISPLAY ");
        printf("\n 4. EXIT \n");

        printf("\n Enter the desired operation using their SR number :");
        scanf("%d",&option);

        

        switch (option){
            case 1 :
                // printf("\n Enter the element to be added : \t");
                // scanf("%d",&queue_elements);
                enqueue(A1,&rear,&front);
                break;

            case 2 :
                dequeue(A1,&rear,&front);
                break;

            case 3 :
                display(A1,&rear,&front);
                break;

            case 4 : 
                exit(4);
                break;
        }
    } 
}

void enqueue(int array[SIZE],int *pointer_rear,int *pointer_front){

    int element;

    if (*pointer_rear==SIZE-1){

        printf("\n Queue is full");
    }
    if(*pointer_front==-1 && *pointer_rear==-1){

        *pointer_front++;
        *pointer_rear++;

        printf("\n Enter the desired number to be added to the queue :");
        scanf("%d",&element);

        array[*pointer_rear]=element;

        printf("\n Element Added to queue sucessfully ");

        *pointer_rear++;
    }
    else{

        printf("\n Enter the desired number to be added to the queue :");
        scanf("%d",&element);

        array[*pointer_rear]=element;

        printf("\n Element Added to queue sucessfully ");

        *pointer_rear++;
    }
}

void dequeue(int array[SIZE],int *pointer_rear,int *pointer_front){

    if (*pointer_front==-1 && *pointer_rear==-1){

        printf("\n Queue is empty ");
    }
    else if (*pointer_front==SIZE-1 && *pointer_rear==SIZE-1){

        *pointer_front++;
        printf("\n Last element in the array has been deleted");

        *pointer_front=*pointer_rear=-1;

    }
    else{

        *pointer_front++;
        printf("\n Element deleted sucessfully ");
    }
}

void display(int array[SIZE],int *pointer_rear,int *pointer_front){

    if (*pointer_front==-1 && *pointer_rear==-1){

        printf("\n Queue is empty");
    }
    else{

        for( int i=*pointer_front ; i<*pointer_rear ; i++ ){

        printf("\n\t %d \n",array[i]);

        }
    }
    
    
    
}

