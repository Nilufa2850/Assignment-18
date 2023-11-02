//3. Write a function to compare two strings.

#include <stdio.h>
#include<string.h>
void comp(char x[] , char y[] ) ;

int main ()
{
    char a[30] , b[30] ;
    
    printf("Enter 1st string : ") ;
    gets(a) ;
    printf("Enter 2nd string : ") ;
    gets(b) ;

    comp(a,b) ;

}

void comp(char x[] , char y[] )
{

    if (strcmp(x,y) == -1)
        printf("string in dictionary order") ;
    else if (strcmp(x,y) == 1)
        printf("string in opposite of dictionary order") ;
    else if (strcmp(x,y) == 0)
        printf("strings are same") ;

} 


