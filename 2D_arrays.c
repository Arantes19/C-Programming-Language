#include <stdio.h>

int main()
{
    //2D array = an array, where each element is an entire array, useful if you need a matrix, grid, or table of data

    /*
    int numbers[2][3] = {                   //the first set of straight brackets is for number of rows and teh second set of straight brackets is for the number of columns.
                          {1, 2, 3},
                          {4, 5, 6}
                        };
    */

    int numbers[3][3]; //3 linhas 3 Colunas
    int rows = sizeof(numbers)/sizeof(numbers[0]); //
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns %d\n", columns);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    //How to display the elements od a two-dimentional array? Using nested loops

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            //printf("Valor da linha %d, coluna %d: ", i+1, j+1);
            //scanf("%d", &numbers[i][j]);
            printf(" %d\t", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}