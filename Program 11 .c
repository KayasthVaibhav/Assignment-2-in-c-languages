/*1. Write a program to input a number from the user and also input a digit?
 Append adigit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349) */

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter a number :");
    scanf("%d",&a);

     printf("Enter a Digit :");
    scanf("%d",&b);

    a = a*10;
    a = a+b;

    printf("Append adigit in the number and print the resulting is  number %d\n", a);
    return 0;

}
//completed //
