#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack_arr[MAX]; //criação do array com máximo 9 inteiros
int first = -1;     //Variável responsável pelo topo da stack

/// @brief Função que verifica se a stack está cheia
/// @return 1 stack is full | 0 stack with space                                                                                                                    
int isFull()                                                                                                                                                        
{                                                                                                                                                                   
    if(first == MAX -1)                                                                                                                                             
        return 1;
    else 
        return 0;
}

/// @brief Função que verifica se a stack está vazia
/// @return 1 stack is empty | 0 stack with data 
int isEmpty()
{
    if(first == -1)
        return 1;
    else
        return 0;
}

/// @brief Função que insere um elemento na stack
/// @param data 
/// @return 
int push(int data)
{
    int i;
    if(isFull())
    {
        printf("Stack Overflow\n"); //Stack cheia
        exit(1);
    }
    first += 1;
    for (i = first; i > 0; i--)      //i = first e vai decrementar até 0
      stack_arr[i] = stack_arr[i-1]; //pega na posição i e iguala á posição i-1 (anterior)
    stack_arr[0] = data;             //posição inicial da stack vai ser igual ao valor que o user escolheu 

}

/// @brief Função que dá print ao array
/// @return 
int print()
{
    int i;
    if (first == -1)
    {
        printf("Stack underflow\n"); //Stack vazia
        exit(1);
    }
    for (i = 0; i <= first; i++)        //Enquanto i (0), for menor ou igual ao índice do topo da stack, i++
        printf("%d -> ", stack_arr[i]);     //print stack_arr[i]
    printf("\n"); 
}

/// @brief Função que remove o último elemento a ser inserido (top)
/// @return elemento removido
int pop() //delete the topmost element
{
    int i, value;
    if(isEmpty())
    {
        printf("Stack Underflow\n"); //Stack vazia
        exit(1);
    }
    value = stack_arr[0];               //value = último valor inserido na stack
    for (i = 0; i < first; i++)         //Enquanto i (0), for menor que índice do topo da stack, i++
        stack_arr[i] = stack_arr[i+1];  //O último elemento a ser inserido é substituido pelo elemento da célula seguinte
    first -= 1;
    return value;
}

/// @brief Função que vai buscar apenas o último elemento inserido
/// @return Topmost element
int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack_arr[0];
}

int main()
{
    int choice, data;
    while(1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is %d\n", data);
            break;
        case 3:
            printf("The topmost element of the stack is %d\n", peek() );
            break;
        case 4: 
            print();
            break; 
        case 5: 
            exit(1);

        default:
            printf("Wrong choice\n");
           
        }
    }
    return 0;
}