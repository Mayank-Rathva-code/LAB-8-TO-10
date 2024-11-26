// WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS
#include <stdio.h>
int biggest_no(int *y, int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        if (*y<*(y + i))
        {
            *y = *(y+i);
        }
    }
    return *y;
}
int main()
{
    int size;
    printf("enter number of elements you want to insert:");
    scanf("%d", &size);
    int arr[size];
    printf("enter the numbers in list:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int*p;
    p=arr;
    printf("largest num of list is %d", biggest_no(p, size));
}
