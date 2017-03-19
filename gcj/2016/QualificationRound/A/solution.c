/* 
   When will the sheep fall asleep?
   - she picks a number N. 
   - she starts naming N, 2 × N, 3 × N, and so on. 
   
   - if: she names a number, then: 
   -- she thinks about all of the digits in that number. 
   -- she keeps track of which digits (0, 1, 2, 3, 4, 5, 6, 7, 8, and 9) she has seen at 
   least once so far as part of any number she has named. 
   -- if: she has seen each of the ten digits(0..9) at least once, she will fall asleep.
   as i am starting counting from one to leave the 0 sepcial case out, then i will substract (sizeof(digits[0])) from the total amount of space of the array
   for simplifications and as I know that the size of the array is 8 now counting from 1..9 then (sizeof(digits)/ sizeof(digits[0])) - (sizeof(digits[0]));
   would be replaced with 8

*/

#include <stdio.h>
#include <ctype.h>

// for sleep function: usleep(10000);
#include <unistd.h>

// adds c99 bool true and false instead of 0 and 1
#include <stdbool.h>

// function prototype for a call by value function, also called function declaration
int cansleep ( long n );


int cansleep(long n)
{
  static long digits[10];
  bool foundzero  = false;
  bool found1to9  = false;
  int lastdigit   = -1;

  while(n)
    {
      /*
        checks if the digit is zero or not
        if the digit is zero set foundzero to true
      */
      if (n%10 == 0)
        {
          //not needed! digits[0] = 0;
          foundzero = true;
          //printf("last digit %d\n", lastdigit);
          if (lastdigit == -1)
            {
              lastdigit = 0;
            }
        }
      else
        {
          digits[n%10] = n%10;
          // printf("lastdigit %d\n", lastdigit);
          if (lastdigit == -1)
            {
              lastdigit = digits[n%10];
            }
        }

      // printf("lastdigit %d\n", lastdigit);

      // printf("print n mod 10: %ld\n", n%10);
      n /= 10; 
    }

  /* 
     checks for the digits array is beteen position 1 to 9
     as digits array is initialized by default to zero then
     if any positions between 1 to 9 contains a zero the while loop will break the look and cansleep function return 0
     else it sets the found1to9 to true
  */
  for( int i=1; i <= 9; i++ )
    {
      // 
      if ( digits[i] == 0 )
        {
          found1to9 = false;
        }
      else
        {
          found1to9 = true;
        }
    }

  // if foundzero and found1to9 then return success
  if (foundzero == true && found1to9 == true)
    {
      printf("cansleep will return 1, and last digit is %i \n", lastdigit);
      return 1;
    }
  return 0;
}

int main() {
  // she picks a number N. 
  // somekind of scanf here to get the N
  long n = 98765432122222202;

  /* 
     she starts naming N, 2 × N, 3 × N, and so on. 
     while (n == 1)
     {
     printf("%i \n", i * n);
     i = i + 1;
     }
  */

  /* 
     if: she has seen each of the ten digits(0..9) at least once, she will fall asleep. 
     she thinks about all of the digits in that number. 
     can't sleep
     n = 122043;
  */
  
  printf("N: %ld \n", n);
  // can sleep
  if (cansleep(n))
    {
      printf("sleep\n");
    }
  else
    {
      printf("INSOMNIA");
    }
  return 1;
}
