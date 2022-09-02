//5. Write a program to input a three-digit number and display the sum of the digits  ?

#include <stdio.h>
#include <conio.h>

int main()
{
    int x,rem=0,sum=0;
    printf("Enter a Number :");
    scanf("%d", &x);

    rem= x%10;
    x=x/10;
    sum= rem;

    //rem= x%10;
    //x=x/10;
   //sum= rem;

    //rem= x%10;
    //x=x/10;
   //sum= rem;

    printf("%d",sum);
    return 0;

}
//completed//
