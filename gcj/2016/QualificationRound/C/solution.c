#include <stdio.h>
#include "./hackspree.h"

// function prototypes
int primalityTest(ll n);
int binarystringTest(char n[]);

int binarystringTest(char n[])
{
  int test;
  for (int i = 0; n[i] != 0; i++){
    if( !( n[i]==0 || n[i]==1 ) )
      {
        test = 0;
        break;
      }
    else
      {
        test = 1;
      }
  }
  return test;
}

int primalityTest(ll n)
{
  printf("ss %lli", n);
  return 0;
}

int xconvert(int number,int base){
  if(number == 0 || base==10)
    return number;

  return (number % base) + 10*convert(number / base, base);
}

int main () {
  int i;
  for(i=2;i<=10;++i)
    printf("%d is %d base(%d)\n", 100, convert(100, i), i);
  int x = 3 * (3 % 2);
  printf("%i\n", x);

  int y = 3 % 2;
  p("%i\n", y);

  // define forall(i,a,b) for(int i=a;i<b;i++)

  forall(j, 0, 10)
    {
      p("hackspree..... %i\n", j);
    }

  return 0;
}
