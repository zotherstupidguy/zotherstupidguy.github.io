#include <stdio.h>

int convert(int number,int base){
  if(number == 0 || base==10)
    return number;

  return (number % base) + 10*convert(number / base, base);
}

int main () {
  int i;
  for(i=2;i<=10;++i)
    printf("%d is %d base(%d)\n", 100, convert(100, i), i);
  return 0;
}
