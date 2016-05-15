#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // ask user for an integer
    printf("Give me an integer between 1 and 10\n");
    int n = GetInt();
    
    // judge users input
    if (n >= 1 && n <= 3)
    {
        printf("You picked a small number.\n");
    }
    else if (n >= 4 && n <= 6)
    {
        printf("You picked a medium number.\n");
    }
    else if (n >= 7 && n <= 10)
    {
        printf("You picked a big number!\n");
    }
    else
    {
        printf("You picked an invalid number.\n");
    }
}
