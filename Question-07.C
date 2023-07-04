/*Write a function to check whether a given string is palindrome or not.*/

#include<stdio.h>
int palindrome (char []);

int main ()
{
    char A[20] ;

    printf("Enter a string : ");
    fgets(A,20,stdin);

    if( palindrome(A) == 1)
        printf("It's a Palindrome string .");
    else 
        printf("Isn't");

    return 0 ;
} 


int palindrome (char str[])
{
    int i , L ;

    for(i=0 ; str[i] ; i++);
    L=i-1 ;

    for(i=0 ; i<L/2 ; i++)
    
        if(str[i] != str[L-1-i])
                return 0 ;
        
    if(i == L/2)
        return 1 ;
}
