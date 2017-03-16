#include <stdio.h>
#include <ctype.h>


int main() {
  char *ch;
  char ch2;
  ch = "dfasfasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfaasdfasfassssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssafa";
  ch2 = 'b';
  int lower = islower(ch2);       
  // int upper = isupper(ch);       // these functions return a non-zero value if the
  // int alpha = isalpha(ch);       // test is TRUE, otherwise they return 0 (FALSE) 
  // int digit = isdigit(ch);
  // int alnum = isalnum(ch);       
  // int punct = ispunct(ch);
  // int space = isspace(ch);       
  //  char chtolower =  tolower(ch);
  // char chtoupper = toupper(ch);

  printf("%s \n", ch);
  printf("%c\n", toupper(ch2));

  return 0;
}
