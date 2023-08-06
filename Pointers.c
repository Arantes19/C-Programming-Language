#include <stdio.h>

void printAge(int *p2Age) // (int age)
{
     // printf("You are %d years old", age); 
    printf("You are %d years old", *p2Age); //dereference
}

int main()
{

    /* Pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    some tasks are performed  more easily with pointers
    * = indirection operator (value at address) */

    /* ADVANTAGES OF USING POINTERS
    1. Less time in program execution
    2. Working on the original variable
    3. With the help of pointers, we can create data structures (linked-list, stack, queue).
    4. Returning more than one values from functions.
    5. Searching and sorting large data very easily.
    6. Dynamically memory allocation */
    
    int age = 21;
    int *pAge = &age;
    int *p2Age = pAge;

    printf("address of age: %p\n", &age);
    printf("address of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n\n", *pAge); //dereferecing

    printAge(p2Age); // (age)


    return 0;
}