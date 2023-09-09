#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void insert(); // function prototype

void traverse(); // function prototype

void search(); // function prototype

void delete(); // function prototype

void main(){
    
    int A1[SIZE];
    int option;
    int top=0; // top variable is used to situate the current position of the last element in an array

    while(1){

        printf("\n -----Menu----- \n");
        printf("\n 1. INSERT \n");
        printf("\n 2. DELETE \n");
        printf("\n 3. TRAVERSE \n");
        printf("\n 4. SEARCH \n");
        printf("\n 5.EXIT \n");
        

        printf("\n Select the desired opertaion by entering its SR number : \t");
        scanf("%d",&option);

        
        switch (option)
        {

        /*declaring variables for each case to keep the code clean 
        expect for some for obious reasons */

        int insrt;
        int del;
        int srch;

        case 1:
            printf("\n Enter the element to be inserted :");
            scanf("%d",&insrt);
            insert( A1 , &top , insrt );
            break;
        
        case 2:
            printf("\n Enter the element to be DELETED :");
            scanf("%d",&del);
            delete(A1,&top,del);
            break;
        
        case 3:
            printf("\n Displaying Elements");
            traverse( A1 , &top);
            break;

        case 4:
            printf("\n Enter the element to be SEARCHED :");
            scanf("%d",&srch);
            search( A1 , &top , srch);
            break;

        case 5: 
            exit(1); // <stdlib.h> function
            break;

        default:
            printf("\n Enter a valid number");
        }
    }

}

void insert(int array[],int *pointer,int element){

    //here *pointer means top which shows the position of the last element in an array 

    if( *pointer < SIZE ){
        array[*pointer]=element;
        printf("\n Element entered at position %d  SUCESSFULLY",*pointer);
        (*pointer)++;
    }
    else{
        printf("\n Arary is full cannot insert elements furthur");
    }
}

void traverse(int array[],int *pointer){

     //here *pointer means top which shows the position of the last element in an array 

    // traverse is just a fancy word for displaying all the element in the array 
    for(int i=0;i<*pointer;i++){
        printf("\n [%d] = %d",i,array[i]);
    }

}

void search(int array[],int *pointer,int element){

     //here *pointer means top which shows the position of the last element in an array 

    int found=0;

    for(int i=0;i<*pointer;i++){

        /* here we compare the element to be found with each 
        and every element in the array and check if there is a match 
        if found we assign the found variable 1 after exiting the loop if found=0 then element not found*/
        if(array[i]==element){
            printf(" \n Element %d  found at position %d",element,i);
            found=1;
            // continue;
        }
    }
    if(found==0){
            printf("\n Element not found");
        }
}

void delete(int array[],int *pointer,int element){

     //here *pointer means top which shows the position of the last element in an array 

    /* here to first we find the element using the search function method
    once found one new loop is started where the the found elemt is replared by the next element 
    and the next by its next n so on till *pointer-1 i.e top-1 and deletes the *pointer i.e top by 1 */
    int found = 0;
    for (int i = 0; i < *pointer; i++) {
        if (array[i] == element) {
            found = 1;
            for (int j = i; j < (*pointer - 1); j++) {
                array[j] = array[j + 1];
            }
            (*pointer)--;
            printf("Element deleted successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Element not found in the array.\n");
    }
}
