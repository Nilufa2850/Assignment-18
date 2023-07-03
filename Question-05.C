// Write a function to transform string into lower case.

#include<stdio.h>
char* trans_lwr (char []) ;

int main ()
{
    char A[20] ;

    printf("Enter a UPPER case string : ");
    fgets(A,20,stdin);

    printf("lower case : %s ",trans_lwr(A) );
    return 0 ;
}

char* trans_lwr (char str[])
{
    int i ;

    for(i=0 ; str[i] ; i++)

        if (str[i]>='A' && str[i]<='Z')
            str[i]+=32 ;
         
        return str;
}
