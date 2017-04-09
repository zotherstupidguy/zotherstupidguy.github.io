/*////
  copyright 2017 hackspree.com
  -----------------------------
  Usage: #include "hackspree.h"

  this header file is acompined with an emacs hackspree.el 
  that provides some shoftcuts for inserting compeitive programming snippets.
*/////

/* 
   Macros
*/

 
 
/// I/O Start
#define sf                    scanf
#define pf                    printf

#define is_prime              "some prime function" 
 
#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)
 
#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)
 
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
/// I/O End

#define ll long long
#define ld long double;
#define t int t; cin>>t; while(t--)
#define show(a) for(i=0;i<a.size();i++) cout<<a[i]<<" ";
//#define s(n) scanf("%d",&n);
#define scan_d(n) scanf("%d",&n);
#define scan_i(n) scanf("%i",&n);
#define scan_l(n) scanf("%l",&n);
#define p printf
#define u(i,a,b) for(i=a;i<b;i++)
#define d(i,a,b) for(i=a;i>b;i--)
#define mod 1e9+7
#define INF = 0x3f3f3f3f;

#define s(n)  scanf("%d",&n);
#define s2(a,b) scanf("%d%d",&a,&b)
#define s3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sc(n) scanf("%c",&n)
#define sl(n) scanf("%I64d",&n)
// #define sf(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define foreach(v, c) for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a) a.begin(), a.end()
#define WHILE(n) while(n--)
#define pb                          push_back
#define minimum(a)					*min_element(a.begin(), a.end())
#define maximum(a)					*max_element(a.begin(), a.end())
// typedef long long ll;
// typedef long double ld;
// MOD = 1e9 + 7;
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
//ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}




/*////
  functions to check for prime numbers
*/////
void filename_func1();
int filename_func2(int a, int b);

/*////
  functions to search for prime numbers

*/////
// #include <stdio.h>
int convert(int number,int base)
{
  if(number == 0 || base==10)
    return number;

  return (number % base) + 10*convert(number / base, base);
}

/*
  int main () {
  int i;
  for(i=2;i<=10;++i)
  printf("%d is %d base(%d)\n", 100, convert(100, i), i);
  return 0;
  }
*/




/*
// Mathematics
Prime Number
Big Integer
Permutation
Number Theory
Factorial
Fibonacci
Sequences
Modulus
*/
/*
// Dynamic Programming
Longest Common Subsequence
Longest Increasing Subsequence
Edit Distance
0/1 Knapsack
Coin Change
Matrix Chain Multiplication
Max Interval Sum
*/

/*
// Graph
Traversal
Flood Fill
Floyed Warshal
MST
Max Bipertite Matching
Network Flow
Aritculation Point
*/

/*
// Sorting
Bubble Sort
Quick Sort
Merge Sort (DAndC)
Selection Sort
Radix Sort
Bucket Sort
*/

/*
// Searching
Complete Search, Brute Force
Binary Search (DAndC)
BST
*/

/*
// Simulation
Josephus
*/

/*
// String Processing
String Matching
Pattern Matching
*/

/*
// Computational Geometry
Convex Hull
*/

/*
// AdHoc
Trivial Problems
*/



