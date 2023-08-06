#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int queue_arr[MAX];
int head = 0;   //Aponta para a célula anterior à cabeça da lista
int tail = 1;   //Aponta para a úiltima posição ocupada   

int isFull()
{
    if (head == MAX -1)
    {
        printf("Queue is Full");
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if (head == 0)
    {
        printf("Queue is Empty");
        return 1;
    }
    return 0;
}

int Enqueue(int data)
{
    if(isFull())
    {
        printf("Queue is Full");
        exit(1);
    }
    queue_arr[head] = data;
    head++;

}

int Dequeue()
{
    int res = queue_arr[0];
    int i;
    if (head == 1)
    {
        printf("Queue empty\n"); 
        exit(1);
    }
    for (i = 0; i < head; i++)
        queue_arr[i] = queue_arr[i + 1];
    head--;
    return res;
}

int print()
{
    int i;
    if (head == 0)
    {
        printf("Queue empty\n"); 
        exit(1);
    }
    for (i = 0; i <= head; i++)        
        printf("%d -> ", queue_arr[i]);    
    printf("\n"); 
}

int peek()
{
    if (isEmpty())
    {
        printf("Queue empty\n");
        exit(1);
    }
    return queue_arr[0];
}

int main()
{
    int choice, data;
    while(1)
    {
        printf("\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Print the head id\n");
        printf("4. Print all the elements of the queue\n");
        printf("5. Quit\n\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be enqueue: ");
            scanf("%d", &data);
            Enqueue(data);
            break;
        case 2:
            data = Dequeue();
            printf("Deleted element is %d\n", data);
            break;
        case 3:
            printf("The head of the queue is %d\n", peek() );
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