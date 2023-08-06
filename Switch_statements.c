#include <stdio.h>

int main()
{
    //  Switch: A more efficient alternative to using many "else if" statments
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    /*if(grade == 'A')
    {
        printf("Perfect!!\n");
    }
    else if (grade == 'B')
    {
        printf("Good!!\n");
    }
    else if (grade == 'C')
    {
        printf("Okay!!\n");
    }
    else if (grade == 'D')
    {
        printf("Meh!!\n");
    }
    else if (grade == 'F')
    {
        printf("Terrible\n!!");
    }
    else{
        printf("That grade is not available!!\n");
    }
    */

   switch(grade)
   {
       case 'A':
            printf ("Perfect!!");
       break; //The reason that we add breaks after each case is so we can break out of out switch and exit
       case 'B':
            printf("Great!!");
        break;
        case 'C':
            printf("Razoable!!");
        break;
        case 'D':
            printf("Bad!!");
        break;
        case 'F':
            printf("You Failed!!");
        break;
        default:
            printf("Please enter only valid grades!!");
   }
    return 0;
}