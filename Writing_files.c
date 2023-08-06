#include <stdio.h>

int main()
{
    /*
    FILE *pF = fopen("file.txt", "w");

    fprintf( pF, "Hello World");

    fclose(pF);
    */

    
    if (remove("file.txt") == 0)
    {
        printf("That file was deleted successfully");
    }
    else
    {
        printf("That file was not deleted");
    }
    

    return 0;
}