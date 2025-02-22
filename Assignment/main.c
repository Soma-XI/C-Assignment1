#include<stdio.h>
 
int main() {
 
 
    char name[100];
    int grade1;
    int grade2;
    int grade3;
    int total;
    float average;
    int enterStudent;
    int studentCount =0;
 
//Prompt the user to input student details (name, grades for 3 subjects).
  do {
    printf("Please enter the student name:");
    scanf(" %[^\n]" ,name );
    printf("you entered the name as : %s \n", name);
     studentCount++;
    printf("you entered  %d  students \n",studentCount);
    printf("Please enter the three grades 0-100");
    scanf(" %d %d %d",&grade1, &grade2, &grade3);
     if (grade1<0 || grade1>100 ||grade2<0 || grade2>100 || grade3<0 || grade3>100){

     printf("Please enter the three grades 0-100");
     continue;
    }
    total = grade1 +grade2 +grade3;
    average =total/3;
    printf("the total is %d \n", total);
    printf("the average is %f \n", average);
    printf("Do you want to add another student? 1 for yes 2 for No ");
    scanf(" %d" ,&enterStudent );
  } while (enterStudent == 1 ) ;
    printf("Final Summary:\n");
printf("Number of students processed: %d\n", studentCount); 
//intf("Class Average: %.2f\n", classAverage); 
   printf("====================================\n"); 
printf("Thank you for using the Student Grades Management System.\n");


 
    
}