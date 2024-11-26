//WRITE A C PROGRAM  USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING. 
#include<stdio.h>
int count(char *x)
{
    //int size=0;
    int space=0;
    while(*x!='\0')
    {
        //size+=1;
        if(*x==' ')
        {
            space+=1;
        }
        *x++;
    }
    return space+1;
}
int main()
{
    char *str;
    str="New Delhi is the Capital of INDIA";
    int words=count(str);
    printf("no of words in the string is %d",words);
}