#include<stdio.h>
unsigned long long int a[10],c,x,y;
unsigned long long int n,i,j;
int main(){
  scanf("%llu",&n);
  for(;i++<n;){
    scanf("%llu",&x);
    if(!x){
      printf("Case #%llu: INSOMNIA\n",i);
      continue;
    }
    // that could have been done by intializing an array with a default value, why he choose 0??
    // essentially it populates a[] with zeros
    // long long int c starts with 10 and ends with 0
    for(c=10;c;)
      {
        a[--c]=0;
        printf("%llu\n", c);
      }
    // used the c from the loop above as a condition in this loop!
    // c now is 0
    for(j=1;c<10;j++)
      for(y=x*j;y;y/=10)
        c+=!a[y%10]++; // cryptic
    printf("Case #%llu: %llu\n",i,x*--j);
  }
}
