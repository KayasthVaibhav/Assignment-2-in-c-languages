/* 13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right */

#include <stdio.h>
#include <conio.h>

int main()
{
    int x = 679, q, r;
    q= x/10;
    r=x%10;
    x=r*100 + q;
    printf("%d",x);
    return 0;

}
//complete//
