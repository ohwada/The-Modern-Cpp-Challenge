 /**
 * pro28.c
 *  License plate validation
 * 2022-06-01 K.OHWADA
 */

// gcc pro29.c

// TODO:
// do not unmatch
// ABC-DE 12345 

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <regex.h>


 /**
 * validate_license_plate_format
 */
bool validate_license_plate_format(const char *text)
{
    const char PATTERN[] = "[A-Z]{3}-[A-Z]{2} [0-9]{3,4}";
   
    const int SIZE = 2;
    regmatch_t match[SIZE];

    regex_t buffer;

    if ( regcomp(&buffer, PATTERN, REG_EXTENDED) != 0 )
    {
        printf("regcomp failed \n");
        return false;
    }

   bool ret = ( regexec(&buffer, text, SIZE, match, 0) == 0 )?true: false;

    regfree(&buffer);

    return ret;
}


 /**
 * main
 */
int main()
{

const char* TEXT1 = (char *)"ABC-DE 123";
const char* TEXT2 = (char *)"ABC-DE 1234";
const char* TEXT3 = (char *)"ABC-DE 12345";
const char* TEXT4 = (char *)"ABC-DE 12";

// case 1
bool ret1 = validate_license_plate_format(TEXT1);

printf("%s \n", TEXT1);
printf(" validate: %d \n", ret1);

// case 2
bool ret2 = validate_license_plate_format(TEXT2);

printf("%s \n", TEXT2);
printf(" validate: %d \n", ret2);

// case 3
bool ret3 = validate_license_plate_format(TEXT3);

printf("%s \n", TEXT3);
printf(" validate: %d \n", ret3);

// case 4
bool ret4 = validate_license_plate_format(TEXT4);

printf("%s \n", TEXT4);
printf(" validate: %d \n", ret4);

    return 0;
}


// ABC-DE 123 
 // validate: 1 
// ABC-DE 1234 
 // validate: 1 
// ABC-DE 12345 
 // validate: 1 
// ABC-DE 12 
 // validate: 0 

