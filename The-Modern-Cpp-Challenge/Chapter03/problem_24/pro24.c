/**
 * pro24.c
 * String to binary conversion  
 * 2022-06-01 K.OHWADA
 */

// gcc pro24.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>


/**
 * hexchar_to_int
 */
unsigned char hexchar_to_int(char const ch)
{
   if (ch >= '0' && ch <= '9') return ch - '0';
   if (ch >= 'A' && ch <= 'F') return ch - 'A' + 10;
   if (ch >= 'a' && ch <= 'f') return ch - 'a' + 10;
   printf("Invalid hexadecimal character \n");
    return 0;
}


/**
 * hexstr_to_bytes
 */
void hexstr_to_bytes(unsigned char *bytes, char *str, int *size)
{
 
int len = strlen(str);

int cnt = 0;
   for (size_t i = 0; i < len; i += 2) 
   {
      bytes[cnt] =
         (hexchar_to_int(str[i]) << 4) | hexchar_to_int(str[i+1]);
        cnt ++;
   }

    *size = cnt;
}


/**
 * verify
 */
bool verify(unsigned char *bytes, int size, unsigned char *expect, int size_expect)
{
    if(size !=  size_expect){
        printf("unmatch size: %d \n", size);
        return false;
    }

    for(int i=0; i<size; i++) 
    {
        unsigned char b = bytes[i];
        printf( "%02X, ", b );
        if ( b != expect[i]){
        printf("unmatch expect: %d \n", b);
        return false;
        }
    } // for
    printf( "\n" );

        return true;
}


/**
 * main
 */
int main()
{
char hexstr1[] = "BAADF00D42";
char hexstr2[] = "BaaDf00d42";

const int SIZE = 5;
   unsigned char expect[SIZE] = { 0xBA, 0xAD, 0xF0, 0x0D, 0x42 };

const int BUFSIZE = 100;
    unsigned char bytes1[BUFSIZE];
    unsigned char bytes2[BUFSIZE];

    int size1;
    int size2;

// case 1
    printf( "%s \n", hexstr1 );

    hexstr_to_bytes( bytes1, hexstr1, &size1);

    bool ret1 = verify(bytes1, size1, expect, SIZE);

    printf("verify 1: %d \n", ret1);

// case 2
    printf( "%s \n", hexstr2 );

    hexstr_to_bytes( bytes2, hexstr2, &size2);

    bool ret2 = verify(bytes2, size2, expect, SIZE);

    printf("verify 2: %d \n", ret2);

    return 0;
}


// BAADF00D42 
// BA, AD, F0, 0D, 42, 
// verify 1: 1 
// BaaDf00d42 
// BA, AD, F0, 0D, 42, 
// verify 2: 1 

