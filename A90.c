// WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS.
#include <stdio.h>
    int
    lenght_of_str(char *x) // lenght of string including spaces
{
    int count = 0;
    while (*x != '\0')
    {
        count++;
        *x++;
    }
    return count;
}
int space(char *x) //function for find number of spaces
{
    int len = 0;
    while (*x != '\0')
    {
        if (*x == ' ')
        {
            len++;
        }
        *x++;
    }
    return len;
}
int main()
{
    char str[] = "my name is mayank rathva";
    printf("size of the string including spaces will be %d", lenght_of_str(str));
    printf("\nsize of the string excluding spaces will be %d", lenght_of_str(str) - space(str));
    return 0;
}
