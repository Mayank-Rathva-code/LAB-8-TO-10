// WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
#include <stdio.h>
int square_of_num(int no)
{
    no = no * no;
    //int *x = &no;
    int *x;
    x=&no;
    return *x;
}
int cube_of_num(int no)
{
    no = no * no * no;
    int *x = &no;
    return *x;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    printf("square of the number will be %d", square_of_num(num));
    printf("\nAnd cube of the number will be %d", cube_of_num(num));
    return 0;
}
