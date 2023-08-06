#include <stdio.h>
#include <string.h>

//1º: Create struct
 struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    //We are working with students and we need to print each students name and gpa
    //2º: Initialize some structs
    struct Student student1 = {"Francisco", 4.5};
    struct Student student2 = {"Miguel", 5.0};
    struct Student student3 = {"Ze", 3.0};
    struct Student student4 = {"Joana", 4.0};

    //3º: Create an array of structs
    struct Student students[] = {student1, student2, student3, student4};

    //4º: Create a for loop to loop trought our array instead using a lot of prints
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }
    
    /*
    printf("%-12s\t", student1.name);
    printf("%.2f\n", student1.gpa);
    (...)
    */

    return 0;
}