//(88) WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#include <stdio.h>
void copyarray(int size, int x[size], int y[size])
{
    for (int i = 0; i < size; i++)
    {
        int *s = &x[i];
        y[i] = *s;
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
        printf("%d\t", arr[i]);
    }
    return 0;
}