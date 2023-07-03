// Write a function to calculate length of the string.

#include<stdio.h>
int length (char[]);

int main ()
{
    char A[20] ;

    printf("Length is %d", length(A));
    return 0 ;
}

int length (char str[])
{
    printf("Enter a string constant : ") ;
    gets(str);

    int i , count = 0 ;

    for(i=0 ; str[i] ; i++)
        count ++ ;

    return count ;
}
