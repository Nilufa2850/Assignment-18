/*9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )*/

#include <stdio.h>
#include<string.h>

void rev(char a[]) ;
void swap (char str[] , int i , int j) ;

int main ()
{
    char a[100] ;   
    printf("Enter your string : ") ;
    fgets(a , 100 , stdin) ;
    rev( a ) ;
    return 0 ;
}
void swap (char a[] , int i , int j)
{
    char temp ;
    while (i<=j)
    {
        temp = a[i] ;
        a[i] = a[j] ;
        a[j] = temp ;
        i++ ;
        j-- ;
    }
}

void rev(char a[]) 
{
    int i , start=0 , end=0 , flag=0 ;

    for (i=0 ; a[i]  ; i++)
    {   
        while (a[i]!=' ')
        {
            if (a[i]=='\0')
            {
                flag=1 ;
                break ;
            }
            end++ ;
        }
        //reverse word wise
        swap(a,start , end-1) ;

        if (flag==1)
            break ;

        start = end+1 ;
    }

    // reverse full string
    swap (a , 0 , i-1) ;

    printf("\n%s" , a) ;

} 


