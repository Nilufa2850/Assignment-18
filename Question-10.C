// Write a function to find the repeated character in a given string.

#include<stdio.h>
void repeat(char []) ;

int main ()
{
    char A[20];
    printf("Enter a string :");
    fgets(A,20,stdin);

    repeat(A);
    return 0 ;
}

void repeat(char str[])
{
    int i,j, count ;

    printf("Repeated character : \n");

    for(i=0 ; str[i] ; i++)
    {
            count = 0 ;

            for(j=i+1 ; str[j] ; j++)
            {

                    if(str[i]==str[j])
                        count ++ ;

            }

            if (count > 0 )
                printf("%c\n",str[i]);    

    }
}
