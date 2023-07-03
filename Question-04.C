// Write a function to transform string into uppercase.

#include<stdio.h>

void trans_upper (char []) ;

int main ()
{
    char A[20] ;

    printf("Enter a lower case string : ");
    fgets(A,20,stdin);

    trans_upper(A);
    return 0 ;
}

void trans_upper (char str[])
{
    int i ;

    for(i=0 ; str[i] ; i++)

        if (str[i]>='a' && str[i]<='z')
            str[i]+=-32 ;
         
        printf("UPPER CASE : %s",str);
}
