#include <stdio.h>
#include <ctype.h>

/* 
 * When will the sheep fall asleep?
 - she picks a number N. 
 - she starts naming N, 2 × N, 3 × N, and so on. 
   
 - if: she names a number, then: 
 -- she thinks about all of the digits in that number. 
 -- she keeps track of which digits (0, 1, 2, 3, 4, 5, 6, 7, 8, and 9) she has seen at 
 least once so far as part of any number she has named. 
 -- if: she has seen each of the ten digits(0..9) at least once, she will fall asleep.

*/ 

int main() {
  char *ch;
  char ch2;
  ch = "dd";
  ch2 = 'b';

  printf("%s \n", ch);
  printf("%c\n", toupper(ch2));

  return 0;
}
