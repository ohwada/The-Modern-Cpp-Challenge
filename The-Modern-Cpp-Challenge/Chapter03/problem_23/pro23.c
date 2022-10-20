/**
 * pro23.c
 * Binary to string conversion 
 * 2022-06-01 K.OHWADA
 */

// gcc pro23.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

const char NUL = '\0';


/**
 * bytes_to_hexstr
 */
void bytes_to_hexstr(char *hexstr, unsigned char *bytes, int size, bool const uppercase)
{  
const int BUFSIZE = 10;
char buf[BUFSIZE];

char *format;

if(uppercase){
    format = "%02X";
} else {
    format = "%02x";
}

 for(int i=0; i<size; i++)
{
    for(int j=0; j<BUFSIZE; j++) {
        buf[j] = NUL;
    } // for
    snprintf(buf, BUFSIZE, format, bytes[i]);
    strcat(hexstr, buf);
} // for

}


/**
 * main
 */
int main()
{

    const int SIZE = 4;
   unsigned char v[SIZE] = { 0xBA, 0xAD, 0xF0, 0x0D };

    const int BUFSIZE = 100;
    char hexstr1[ BUFSIZE]; 
    char hexstr2[ BUFSIZE]; 
    hexstr1[0] = NUL; 
    hexstr2[0] = NUL; 

    bytes_to_hexstr(hexstr1, v, SIZE, true);
    bytes_to_hexstr(hexstr2, v, SIZE, false);

    for(int i=0; i<SIZE; i++) {
        printf( "%02X,", v[i] );
    } // for
        printf( "\n" );

    printf( "1: %s \n", hexstr1 );
    printf( "2: %s \n", hexstr2 );

    return 0;
}

// BA,AD,F0,0D,
// 1: BAADF00D 
// 2: baadf00d 
