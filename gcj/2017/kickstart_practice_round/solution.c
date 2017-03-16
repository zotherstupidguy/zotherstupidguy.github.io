#include <stdlib.h>
#include <stdio.h> 

int main( void ) {
  int a[5]= {1,2,3,4,5};

  a[4] = 2;

  {
    int x = 1;
    printf( "1st print %i \n", x);
    {
      //int x = 2;
      printf( "2nd print %i \n", x);
      {
        int x = 3;
        printf( "3rd print %i \n", x);
      }
    }
  }
  //printf( "2nd print %i \n", a[1]);
}
