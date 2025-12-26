// 	Q150:Write a C program using structure and dynamic memory allocation to store details of one student (name, roll number, marks).
//		Allocate memory using malloc, input the data using a structure pointer, display it, and then free the allocated memory


#include<stdlib.h>
#include<stdio.h>
struct Student{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    struct Student s1;
    struct Student *ptr=&s1;
    ptr=(struct Student*)malloc(sizeof(s1));
    if(ptr==NULL){
        printf("Memory not allocated\n");
        return 1;
    }
    printf("Enter name, roll number and marks of the student:\n");  
    scanf("%s %d %f",ptr->name,&ptr->rollno,&ptr->marks);
    printf("Name: %s | Roll: %d | Marks: %.2f\n",ptr->name,ptr->rollno,ptr->marks);
    free(ptr);
}