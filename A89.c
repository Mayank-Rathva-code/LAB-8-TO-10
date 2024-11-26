// WRITE A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
#include <stdio.h>
void copyarray(int size, int x[size], int y[size])
{
    for (int i = 0; i < size; i++)
    {
        int *m = &x[i];
        y[size - 1 - i] = *m;
    }
}
int main()
{
    int arr[5];
    printf("enter the numbers in array1 :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arr2[5];
    copyarray(5, arr, arr2);
    printf("\nsecond array will be:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr2[i]);
    }
    return 0;
}