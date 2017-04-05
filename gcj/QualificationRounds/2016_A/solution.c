#include <stdio.h>
#include <ctype.h>
// for sleep function: usleep(10000);
#include <unistd.h>
// adds c99 bool true and false instead of 0 and 1
#include <stdbool.h>

int n, t, ti=1;
int lastn=-1;
int digits[10];
// int digits[10]={[0 ... 9]=-1};
// int digitsi=0;

int main()
{
  scanf( "%i", &t );
  for( ; ti<=t; ti++ )
    {
      scanf( "%i", &n );
      if( n==0 )
        {
          digits[0]=-1;
          printf( "Case #%i: %s\n",ti, "INSOMNIA" );
        }
      else
        {
          printf( "Case #%i: %i\n", ti, n );
        }
    }
  return 1;
}
