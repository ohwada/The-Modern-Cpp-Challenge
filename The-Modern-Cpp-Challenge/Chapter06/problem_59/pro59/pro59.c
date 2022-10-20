/**
 * pro59.c
 * The Weasel program
 * 2022-06-01 K.OHWADA
 */

// gcc pro59.c

#include <stdio.h>
#include <string.h>
#include "random.h"


// prototype
void init(char* t);
void run(int const copies);
double fitness(char* candidate);
void mutate(char *child, char* parent, double const rate);
void make_random(char*buf);
char rand_char();


const size_t BUFSIZE = 256;
char target[BUFSIZE];

const char* ALLOWED_CHARS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";

const char NUL = '\0';


/**
 * init
 */
void init(char* t)
{
    initRand();
    strcpy(target, t);
} 


/**
 * run
 */
void run(int const copies)
{
      char parent[BUFSIZE];
      char child[BUFSIZE];
      char childlen[copies][BUFSIZE];
      const int LIMIT = 1000;

      make_random(parent);
      int step = 1;
printf("%5d %s \n", step , parent);

      do
      {


// generete 100 childlen
// search best score
int num = -1;
double score = fitness(parent);
for(int i=0; i< copies; i++)
{
        mutate((char *)child, (char *)parent, 5);
        strcpy(childlen[i], child);

        double child_soce = fitness(childlen[i]);
        if( child_soce > score) {
                score = child_soce;
                num = i;
        }
} // for

if( (num >= 0)&&(num <copies)) {
    strcpy(parent, childlen[num]);
}

printf("%5d %s \n", step , parent);
step++;
if(step > LIMIT) {
    printf("over limit \n");
    break;
}

      } while ( strcmp(parent, target) != 0);

   }


/**
 *  fitness
 */
   double fitness(char* candidate)
   {
      int score = 0;
int len = strlen(candidate);
      for (size_t i = 0; i<len; ++i)
      {
         if (candidate[i] == target[i]){
            score++;
        }
      }// for

      return score;
   }


/**
 * mutate
 */
   void mutate(char *child, char* parent, double const rate)
   {

      for (int i=0; i<BUFSIZE; i++)
      {
         child[i] = NUL;
      } // for

        int len = strlen(parent);
      for (int i=0; i<len; i++)
      {
        char c = parent[i];
double rnd_rate =100 * genRand();
         char nc = rnd_rate > rate ? c :  rand_char();
         child[i] = nc;
      } // for

   }


/**
 * make_random
 */
   void make_random(char*buf)
   {
      for (size_t i = 0; i < BUFSIZE; ++i)
      {
         buf[i] = NUL;
      } // for

    int len = strlen(target);
      for (int i = 0; i < len; i++)
      {
         buf[i] = rand_char();
      } // for

   }


/**
 * rand_char
 */
char rand_char()
{
int len = strlen(ALLOWED_CHARS);
    int rnd = genRandInt(0, len-1);
    return ALLOWED_CHARS[rnd];
}


/**
 * main
 */
int main()
{
   init("METHINKS IT IS LIKE A WEASEL");
   run(100);

    return 0;
}

 // 78 METHINKS IT IS LIKE A WEASEL
