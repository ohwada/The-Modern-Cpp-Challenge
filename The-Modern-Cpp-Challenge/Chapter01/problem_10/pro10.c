/**
 * pro10.cpp
 * Gray code  
 * 2022-06-01 K.OHWADA
 */

// gcc pro10.c


#include <stdio.h>
#include <string.h>
#include "decimal_to_binary.h"


unsigned int gray_encode(unsigned int const num)
{
   return num ^ (num >> 1);
}

unsigned int gray_decode(unsigned int gray)
{
   for (unsigned int bit = 1U << 31; bit > 1; bit >>= 1)
   {
      if (gray & bit) gray ^= bit >> 1;
   }
   return gray;
}

void to_binary(char *buf, int bufsize, unsigned int value, int const digits)
{
   const int BINSIZE = digits;
    int binary[BINSIZE];

    clear_binary(binary, BINSIZE);
    clear_binary_string(buf, bufsize);
    decimal_to_binary( binary, BINSIZE, value,  digits);
    binary_to_string(buf, bufsize, binary,  digits);
}



int main()
{
    const int DIGITS = 5;
    const int BUFSIZE1 = DIGITS+1;
    const int BUFSIZE2 = DIGITS+2;

    char buf1[BUFSIZE1];
    char buf2[BUFSIZE2];

   printf("Number\tBinary\tGray\tDecoded \n");
   printf("------\t------\t----\t-------\n");

   for (unsigned int n = 0; n < 32; ++n)
   {
        unsigned int encg = gray_encode(n);
        unsigned int decg = gray_decode(encg);

        to_binary(buf1, BUFSIZE1, n, DIGITS);

        to_binary(buf2, BUFSIZE2, encg, DIGITS);
        buf2[BUFSIZE2-1] = NUL;

        printf("%d\t%s\t%s\t%d \n", n, buf1, buf2, decg);
   }// for

    return 0;
}


// Binary	Gray	Decoded 
// ------	------	----	-------
// 0	000000	000000	0 
// 1	000001	000001	1 
// 2	000010	000011	2 
// 3	000011	000010	3


