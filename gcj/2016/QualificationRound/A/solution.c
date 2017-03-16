#include <stdio.h>
#include <ctype.h>


int main() {
  char *ch;
  char ch2;
  ch = "dd";
  ch2 = 'b';

  printf("%s \n", ch);
  printf("%c\n", toupper(ch2));

  return 0;
}
