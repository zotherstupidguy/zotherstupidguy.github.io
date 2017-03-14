// https://code.google.com/codejam/contest/2924486/dashboard#s=p4
#include <stdio.h>
#include <stdlib.h>	// for itoa() call
#include<string.h>

// T * (S + N + M)
// smallset: "10 * (100 + 1000 + 3000)= 41000"
// largeset: "1 * (100+ 80000 + 3000)= 83100" 
#define BUFFERSIZE 83900 // added more as i might be missing some overhead

int main(){
  // number of testcases, and testcases iterator.
  char t[100];
  int ti;

  int n, ni;// number of rooms in the spaceship, and rooms iterator.
  int m[100], mi;// no of turbolifts in the spaceship, and turbolifts iterator. 
  int s[100], si;// number of soliders, and soliders iterator.

  scanf("%d", (int)t);
  printf("%s", t);

  /*  
  for (ti=1; ti<=&t; ti++){
    n = 19;
    scanf("%d", n); // number of rooms
    char rooms[n];

    for (ni=1; ni<=n; ni++){
      char room[2]; // each room is repsresented by two letter characters.
      scanf("%s", room);
      printf("roomnumber %s. \n", room);

      printf("n: %i ", n);
      //rooms[ni - 1] = n;
    }

    */
    /*
    int i;
    //printf("%c", rooms[1]);
    //printf("rooms %s", rooms);
    int l  = (sizeof(rooms) / sizeof(rooms));
    printf("%d", l);
    for (i = 0; i < l; i++) {
      printf("%i", i);
    }
    */
  //}
  return 0;
}




/*
  int *x;
  int y = 1000;
  x = &y; //returns address of y
  //x = y; //returns value of y 
  printf("value: %04x at address: %04x",x, &x);
*/
/*
  
//  sscanf(t, "%s", 3); // number of testcases
  //t = 33;


int x;
  printf("value: %f at address: %04x",x, &x); //returns null and a random address
*/ 
// sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );
  
/*

//rooms_stats(rooms);
void rooms_stats(char *rooms[]){
 int i;

//printf("%i", rooms[1]);
printf("rooms %s", rooms);
int l  = (sizeof(&rooms) / sizeof(&rooms));
printf("%d", l);

//for (i = 0; i < l; i++) {
  //printf("%s", &rooms[i]);
//}
}

//printf("%d contains %d rooms, roomnumber %s. \n", ti, n, x);
#define LARGE "large.in"
#define SMALL "small.in"

void rooms(char *fn){
  int numlines = 0;
  printf("%s contains %d rooms. \n", fn, numlines);
}

//#define MAXSTRLEN 200
void linecount(char *fn){
  int numlines = 0;
  char line[MAXSTRLEN];

  FILE *fp = fopen(fn, "r");
  if (fp !=0){
    while (fgets(line, sizeof(line), fp) != 0){
      numlines++;
    }
    fclose(fp);
    printf("%s contains %d lines of text. \n", fn, numlines);
  } else{
    printf("File %s cannot be opened!\n", fn);
  }
}

//linecount(LARGE);
//linecount(SMALL);
  

int i = 0;
  char buffer[BUFFERSIZE];
  char line[200];
  //  fgets(buffer, BUFFERSIZE , stdin);

  while (fgets(line, sizeof(line), stdin) != 0){
    //...process line of data...
    printf("Read: %s", line);
    buffer[i] = line;
    i++;
  }

  char *x;
  x = fgets(line, sizeof(line), fp);
  printf("%s contains %s testcases. \n", fn, x);


  char *mode = "r";
  int c;
  FILE *file;
  file = fopen(FILENAME, mode);
  
  char str[512];
  int line = 10;
  int loop;
  for(loop = 0;loop<line;++loop){
  fgets(str, sizeof(str), file);
  }

  // how to get each line in the file
  
  if (file) {
  while ((c = getc(file)) != EOF)
  if (getc(file) == '1000'){
  printf("hello world\n");
  //fputs("hello world", stdout);
  }

  putchar(c);
  fclose(file);
  }

int imperative_dice( void ) {
  return imperative_random() % 6 + 1 ;
}


// int main (int argc, char *argv[])
*/
