#include <stdio.h>
#include <string.h>
#include <ctype.h>
// for sleep function: usleep(10000);
#include <unistd.h>
// adds c99 bool true and false instead of 0 and 1
#include <stdbool.h>

// testcase, and testcase counter
int t, ti=1;
int n, ni=0;
char input[100];
// I am stuck at getting the 2nd input!!!!
// iterating the nested datasets

// outputs the number of different alphabets in the input
int alphabets(char inputline[])
{
  //int size = (sizeof(&inputline)/sizeof(inputline[0]));
  int size = strlen(inputline); 
  for(int i=0 ; i<= size; i++ )
    //for(int i=0 ; i<=(int)(sizeof(&inputline)); i++ )
    {
      printf("%c %i\n", inputline[i], size); 
    }
  return 0;
}

int main()
{
  scanf( "%i", &t );
  for( ; ti<=t; ti++ )
    {
      scanf( "%i", &n );
      while( n )
        {
          scanf( "%s", input );
          // printf("%s \n", input ); 
          n--;
          if( n==1 )
            {
              alphabets(input);
              printf( "Case #%i: %s\n", ti, input);
              printf( "Case #%i: %i\n", ti, (int)input);
              scanf( "%i", &n );
            }
        }
    }
  return 1;
}
