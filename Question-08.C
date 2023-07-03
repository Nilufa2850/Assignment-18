// Write a function to count words in a given string

#include<stdio.h>
int count (char []);

int count (char str[])
{
    int i , c=0 ;

    for(i=0 ; str[i] ; i++)
        c ++ ;

    return c ;
}

int main ()
{
    char A[20] ;

    printf("Enter string constant : ");
    gets(A);

    printf("Word = %d", count(A) );
    return 0 ;
}
