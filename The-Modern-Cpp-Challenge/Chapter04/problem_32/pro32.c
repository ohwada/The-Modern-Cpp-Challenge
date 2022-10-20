/**
 * pro32.c
 * Pascal's triangle 
 * 2022-06-01 K.OHWADA
 */

// gcc pro32.c

#include <stdio.h>
#include <math.h>


/**
 * number_of_digits
 */
unsigned int number_of_digits(unsigned int const i)
{
   return i > 0 ? (int)log10((double)i) + 1 : 1;
}


/**
 *  print_space
 */
void print_space(int max)
{
      for(int i=0; i<max; i++) {
            printf(" ");
      }
}


/**
 *  print_pascal_triangle
 */
void print_pascal_triangle(int const n)
{
   for (int i = 0; i < n; i++) 
   {
      int x = 1;
      int m1 = (n - i - 1)*(n / 2);
      print_space(m1);

      for (int j = 0; j <= i; j++) 
      {
         int y = x;
         x = x * (i - j) / (j + 1);
         int maxlen = number_of_digits(x) - 1;
         printf("%d", y);
         int m2 = n - 1 - maxlen - n%2;
         print_space(m2);
      } // for j
        printf("\n");
   } // for i

}


/**
 * main
 */
int main()
{
   int n = 0;
   printf("Levels (up to 10): ");
   scanf("%d", &n);
   if (n > 10) {
      printf("Value too large \n");
   } else {
      print_pascal_triangle(n);
    }

    return 0;
}


// Levels (up to 10): 3
 //  1 
//  1 1 
// 1 2 1

