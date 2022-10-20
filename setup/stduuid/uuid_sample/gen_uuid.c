/**
 * gen_uuid.c
 * 2022-06-01 K.OHWADA
 */

#include <stdio.h>
#include <uuid/uuid.h>


/**
 * main
 */
int main()
{

// generate uuid
	uuid_t value;
	uuid_generate(value);

 // convert to string
	// uuid_string_t result;
	// uuid_unparse_upper(value, result);

const int UUID_LEN = 37; 
	char result[UUID_LEN];
	uuid_unparse(value, result);

printf("%s \n", result);

	return 0;
}

// D822367D-F23D-4AEA-A903-90C6E42A9008
