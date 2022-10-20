/**
 * pro33.c
 * Tabular printing of a list of processes 
 * 2022-06-01 K.OHWADA
 */

// gcc pro33.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * enum procstatus
 */
typedef enum{SUSPENDED, RUNNING} procstatus;

/**
 * enum  platforms
 */
typedef enum {P32BIT, P64BIT}platforms;


/**
 * status_to_string
 */
char* status_to_string(procstatus const status)
{
   if (status == SUSPENDED) {
        return "suspended";
   } else {
        return "running";
    }
}


/**
 * platform_to_string
 */
char* platform_to_string(platforms const platform)
{
   if (platform == P32BIT) {
        return "32-bit";
   } else {
     return "64-bit";
    }
}


/**
 * struct procinfo
 */
typedef struct 
{
   int id;
   char name[100];
   procstatus  status;
   char account[100];
   size_t memory;
   platforms platform;
}procinfo;


/**
 *  cmp_name
 */
int cmp_name(const void * p1, const void * p2)
{	
	char *name1 = ((procinfo *)p1)->name;
	char *name2 = ((procinfo *)p2)->name;

	return strcmp(name1, name2);
}


/**
 *  print_processes
 */
void print_processes(procinfo processes[], int size )
{

qsort(processes, size, sizeof(procinfo), cmp_name);

for(int i=0;i<size; i++)
{
        procinfo pi = processes[i];
         printf("%-25s", pi.name);
        printf("%-8d", pi.id);
        printf("%-12s",  status_to_string(pi.status));
        printf("%-15s", pi.account);
        printf("%10d", (int)(pi.memory/1024));
        printf(" %s", platform_to_string(pi.platform));
       printf("\n");
} // for i
}


/**
 * main
 */
int main()
{


   procinfo processes[] =
   {
      {512, "cmd.exe", RUNNING, "SYSTEM", 148293, P64BIT },
      {1044, "chrome.exe", RUNNING, "marius.bancila", 25180454, P32BIT},
      {7108, "explorer.exe", RUNNING, "marius.bancila", 2952943, P64BIT },
      {10100, "chrome.exe", RUNNING, "marius.bancila", 227756123, P32BIT},
      {22456, "skype.exe", SUSPENDED, "marius.bancila", 16870123, P64BIT }, 
   };

 int size = sizeof(processes) /sizeof(processes[0]);

   print_processes(processes, size);

    return 0;
}


// chrome.exe               1044    running     marius.bancila      24590 32-bit
// chrome.exe               10100   running     marius.bancila     222418 32-bit


