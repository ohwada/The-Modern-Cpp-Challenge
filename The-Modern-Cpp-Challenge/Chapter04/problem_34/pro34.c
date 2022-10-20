/**
 * pro34.c
 * Removing empty lines from a text file 
 * 2022-06-01 K.OHWADA
 */

// gcc pro34.c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>


/**
 * find_first_not_of
 */
int find_first_not_of(char *text, char ch)
{
   const char LF =  '\n';

    int i;
    bool flag = false;
    int len = strlen(text);
    for(i=0; i<len; i++)
    {
        char c = text[i];
        if(c == LF) {
                break;
        }
        if(c != ch) {
                flag = true;
                break;
        }
    } // for i
    if(flag){
        return i;
    }
    return -1;
}


/**
 * remove_empty_lines
 */
void remove_empty_lines(const char *filepath)
{
    FILE *fp;
    FILE *fp_tmp;

fp =fopen(filepath, "r");
if(!fp){
      printf("cannot open file: %s \n", filepath);
        return;
}
  
char fname_tmp[] = "tempXXXXXX";
 
int ret = mkstemp( fname_tmp );
if(ret == -1){
       printf("cannot create temp filename \n");
    return;
}

printf("temp: %s \n", fname_tmp);

fp_tmp = fopen( fname_tmp, "w" );
    if (!fp_tmp) {
        printf("cannot open file: %s \n", fname_tmp);
        return;
    }

    const int BUFSIZE = 255;
	char buf[BUFSIZE];
	char fname[BUFSIZE];

while(fgets(buf, BUFSIZE, fp) != NULL) 
{
      if ( ( strlen(buf) > 0) && ( find_first_not_of(buf, ' ') != -1 ) )
      {
        fputs(buf, fp_tmp);
      }
} // while

fclose(fp);
fclose(fp_tmp);

strcpy(fname, "new_");
strcat(fname, filepath);


// remove(filepath);
rename(fname_tmp, fname);
}


/**
 * main
 */
int main()
{
    const char FILEPATH[] = "sample34.txt";
   remove_empty_lines(FILEPATH);

    return 0;
}
