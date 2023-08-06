#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit); //if the user type in lowercase c or lowercase f this user input will be made upercase

    if (unit == 'C')
    {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
    else
    {
         printf("\n %c is not a valid unit of mesurement", unit);
    }
    return 0;
}