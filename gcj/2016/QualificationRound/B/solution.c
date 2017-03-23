#include<stdio.h>
#include<unistd.h> // sleep(1);
#include <string.h>

unsigned long long t, ti;
int happy, blank, flips;

int main(){
  scanf("%llu", &t);
  //printf("%llu\n", t);
  for(ti=1; ti<=t;ti++ )
    {
      char n[100];
      char prev;
      scanf("%s", n);
      // printf("%s\n", n);
      happy=0;
      blank=0;
      flips=0;
      for(int i=0; i<(strlen(n)); i++)
        {
          if( i==0 )
            {
              prev=0;
            }
          // printf("prev %c\n", prev);
          // printf("n[i] %c\n", n[i]);
          if( prev!=0 && prev!=n[i] )
            {
              //   printf("adding a flip\n");
              flips++;
            }
          if( n[i]=='+' )
            {
              happy+=1;
              prev='+'; 
            }
          if( n[i]=='-')
            {
              blank+=1;
              prev='-'; 
            }
        }
      if( n[((strlen(n))-1)]=='-' )
        {
          // printf("%c\n\n", n[((strlen(n))-1)]);
          flips++;
        }
      //if( n[0]=='-' )
      // flips++;

      //printf("happy: %i, blank: %i\n", happy, blank);
      printf("Case #%llu: %i\n", ti, flips);
    }
  return 0;
}
