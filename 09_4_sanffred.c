/* 
    SANFFRED JOJU
    ROLL NUMBER - 09
    BATCH - A
*/

// DISPLAYING RECORDS OF  5 STUDENTS USING ARRAY OF STRUCTURE IN ASCENDING ORDER OF ROLL LIST


#include <Stdio.h>

struct student{   //creating a structure
    int Rollno;
    char name[100];
    float P;
};


void main(){

    int N;
    printf("\n Enter the number of students: \t "); //taking user input on the number of students
    scanf("%d",&N);

    struct student s[N]; //declaring a structre variable

    printf("\n\n -----Enter the student details:-----");
    for(int i=0;i<N;i++){
        printf("\n Enter the roll no of %d th student : \t ",i+1);
        scanf("%d",&s[i].Rollno);

        printf("\n Enter the name of the %d th student : \t",i+1);
        scanf("%s",s[i].name);

        printf("\n Enter the percentage of the %d th student : \t",i+1);
        scanf("%f",&s[i].P);
    }

    printf("\n\n -----Displaying the list of students-----");
    for(int i=0;i<N;i++){
        printf("\n Roll number  = %d",s[i].Rollno);
        printf("\n   Name         = %s",s[i].name);
        printf("\n   Percentage   = %.2f",s[i].P);
    }


    //in this nested loop we check of the condition if the first array rollno is less than the second one 
    //if true then we interchange their positions using the swap technique
    // the conditions in both the for loops make sure that there is comaprision between the first two roll numbers 
    for(int i=0;i<N-1;i++){
        for(int j=0;j<N-i-1;j++){
            if(s[j].Rollno<s[j+1].Rollno){
                
                struct student temps;
                temps=s[j];
                s[j]=s[j+1];
                s[j+1]=temps;

            }
        }
    }

    printf("\n\n -----Displaying the list of students in descending order of Roll no-----");
    for(int i=0;i<N;i++){
        printf("\n Roll number  = %d",s[i].Rollno);
        printf("\n   Name         = %s",s[i].name);
        printf("\n   Percentage   = %.2f",s[i].P);
    }
}
