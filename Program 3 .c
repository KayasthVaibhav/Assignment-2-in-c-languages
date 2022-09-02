// Write a program to swap values of two int variables ?//

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    printf("Enter the two values for Swapping :\n");
    printf("Enter the first values A =: ");
    scanf("%d",&a);
    printf("Enter the second values B =: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n Value of A is = %d and Value of B is = %d",a,b);
    return 0;

}
//completed//
