// Write a function to reverse a string.

#include<stdio.h>
void reverse (char[]);

int main ()
{
    char A[20];
    printf("Enter a string constant : ");
    gets(A) ;

    reverse(A) ;

    return 0 ;
}

void reverse (char str[])
{
    int i , length = 0 ;

    for(i=0 ; str[i] ; i++);

    length = i-1 ;

    for(i=length ; i>=0 ; i--)
        printf("%c",str[i]);

}
