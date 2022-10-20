 /**
 * str.h
 * 2022-06-01 K.OHWADA
 */


#include <stdio.h>
#include <string.h>

int find_first_of(const char *text, const char *str, int pos);
void substr(char *sub, const char *text, int pos, int len);


/**
 * find_first_of
 */
int find_first_of(const char *text, const char *str, int pos)
{
int len1 = strlen(text);
int len2 = strlen(str);

for(int i=pos; i<len1; i++)
{
        char ch1 = text[i];
        for(int j=0; j<len2; j++)
        {
            char ch2 = str[j];
            if(ch1 == ch2) {
                return i;
            }
        } //  for j
} // for i       
    return -1;
}


/**
 * substr
 */
void substr(char *sub, const char *text, int pos, int len)
{
  strncpy(sub, (text + pos), len);
}
