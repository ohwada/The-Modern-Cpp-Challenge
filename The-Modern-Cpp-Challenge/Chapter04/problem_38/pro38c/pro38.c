/**
 * pro38.c
 *  Finding files in a directory that match a regular expression
 * 2022-06-01 K.OHWADA
 */


// gcc pro38.c -Wall -o bin/pro38

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <uuid/uuid.h>


/**
 *  gen_uuid_random
 */
void gen_uuid_random(char *uuid)
{
	uuid_t value;
	uuid_generate(value);

	uuid_string_t result;
	uuid_unparse_upper(value, result);

    strcpy(uuid, result);
}


FILE *fp;

const int BUFSIZE = 100;
char logpath[100];


/**
 *   log_open
 */
void log_open()
{
    const int SIZE = 100;
    char uuid[SIZE];

    gen_uuid_random(uuid);

    strcpy(logpath, uuid);
    strcat(logpath, ".tmp");

printf("%s \n", logpath);

    fp = fopen(logpath, "w");
}


/**
 *  log_close
 */
void log_close()
{
    fclose(fp);
    remove(logpath);
}


/**
 *  log_persist
 */
  void log_persist(char *path)
   {
      rename(logpath, path);
   }


/**
 *  log_write
 */
  void log_write(char *text)
   {
        const char LF[] = "\n";

        fputs(text, fp);
        fputs(LF, fp);
   }


/**
 *  main
 */
int main()
{

    log_open();

    log_write( "this is a line");

    log_write( "and this is another one");

     log_persist("lastlog.txt");

    log_close();

    return 0;
}

