#include <stdio.h>

void main(){

    int num,size;

    //taking user input for the size of the array 
    
    printf("\n Enter the size of array:- \t");
    scanf("%d",&size);



    //creating an array with the SIZE = size 

    int array[size];



    //to enter the values into the array

    printf("-----Entering elemnts-----\n");
    for(int a=0;a<size;a++){
        printf("\n Eneter element %d \t",a+1);
        scanf("%d",&array[a]);
    }


     /*the following loop works like this :
     itbtakes the first element and compares with rest of the elements of the loop expect itself 
     if no comparision comes out true for the first element then second element is taken to compare 
     now it will starting comparing from 3 element */
     
    int largest=0;
    for(int i=0;i<size;i++){
        if(largest<array[i]){
            largest=array[i];
        }
    }
    
    printf("\n The largest out of the elements is %d",largest);
}T
