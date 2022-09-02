//7. Write a program to find the position of first 1 in LSB Less significatnte bit ?  //

#include <stdio.h>
#include <conio.h>

int main()

{
      int x = 8, count = 0;
      int result = 0;

       result = x&1;
       count++;
      if(result == 1 )
      {
            printf("%d",count);

      }
      x= x>>1;


       result = x&1;
       count++;
      if(result == 1 )
      {
            printf("%d",count);

      }
      x= x>>1;


            result = x&1;
       count++;
      if(result == 1 )
      {
            printf("%d",count);

      }
      x= x>>1;


            result = x&1;
       count++;
      if(result == 1 )
      {
            printf("%d",count);

      }
      x= x>>1;



            result = x&1;
       count++;
      if(result == 1 )
      {
            printf("%d",count);

      }
      x= x>>1;
      return 0;

}
//completed //
