#include<stdio.h>
#include<string.h>

#define logger 
#define DATASET "sample" 
//#define DATASET "A-small-practice" 
//#define DATASET "A-large-practice" 
//#define DATASET "A-small" 
//#define DATASET "A-large" 

int N, K;
char S[1010];

/*
 * string searching naive
 * Usage:
 * int result=naivesearch("pattern", "everywhere, patterns, i see");
 */
int naivesearch(char *p, char *a)
{
  int i, j;
  int M=strlen(p);
  int N=strlen(a);

  for(i=0,j=0; j<M&&i<N; i++, j++)
    {
      while(a[i]!=p[j])
        {
          i-=j-1;j=0;
        }
    }
  if(j==M)
    {
#ifdef logger 
      printf("'%s' found starting %i in '%s'\n", p, i-M, a);
#endif
      return i-M;
    }
  else
    {
#ifdef logger 
      printf("'%s' not found in '%s', returning -1\n", p, a);
#endif
      return -1;
    }
}


void testcase(int TEST)
{
  scanf("%s%d",S,&K);
  N=strlen(S);

  char knegative[K];
  for (int i = 0; i < K; i++) {
    knegative[i]='-'; 
  }
  int result=naivesearch(knegative, S);
#ifdef logger 
  //printf("%i\n", result);
#endif

  if(1==1)
    {
      printf("Case #%d: %i\n", TEST, N);
    }
  else
    {
      printf("Case #%d: %s\n", TEST, "IMPOSSIBLE");
    }

#ifdef logger
  printf("Log: %s %d \n",S,K);
#endif
}

int main()
{
  freopen(DATASET".in", "r", stdin);
  freopen(DATASET".out", "w", stdout);

  int TEST;
  scanf("%d", &TEST);
  printf("%d \n",TEST);
  for(int i=1; i<=TEST; i++)
    {
      testcase(i);
    }

#ifdef logger 
  printf("%s\n", ">>>>>>>Logging::ENABLED<<<<<<<<<<");
#endif
  return 0;
}
