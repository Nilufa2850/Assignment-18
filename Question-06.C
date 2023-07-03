// Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>

int alphanumeric (char str []) ;

int main ()
{
    char A[20] ;
    printf("Enter a string : ");
    fgets(A,20,stdin);

    if( alphanumeric(A)==1 )
        printf("Given string is an alphanumeric string") ;
    else 
        printf("Isn't");

    return 0 ;
}

int alphanumeric (char str [])
{
    int i ,A=0 , D=0 ;

    for(i=0 ; str[i] ; i++)
    {
        if( (str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z') )
            A=1 ;

        if ( str[i]>='0'&& str[i]<='9' ) 
            D=1 ;

    }

    if (A==1 && D==1)
        return 1 ;
    else
        return 0 ;
}
