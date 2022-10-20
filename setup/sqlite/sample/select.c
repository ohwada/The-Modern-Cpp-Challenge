/**
 * select.c
 * 2022-06-01 K.OHWADA
 */

// reference : https://linuxcommand.net/c-lang-sqlite/2/#SELECT

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sqlite3.h"



// prototype
bool select_testtable(sqlite3 *db );


/**
 *  select_testtable
 */
bool select_testtable(sqlite3 *db )
{
    sqlite3_stmt *stmt;
    int rc; //result codes

// generate prepared statement
    rc = sqlite3_prepare_v2(db,"SELECT id, name FROM testtable", -1, &stmt, 0);
    if(rc != SQLITE_OK){
        printf("ERROR(%d) %s\n",rc, sqlite3_errmsg(db));        return false;
    }
    
// read the line.
    rc = sqlite3_step(stmt);
    while(rc == SQLITE_ROW){
        printf("%d %s",
                sqlite3_column_int(stmt, 0),
                sqlite3_column_text(stmt, 1));
        printf("\n");
        rc = sqlite3_step(stmt);
    }

// release prepared statement
    rc = sqlite3_finalize(stmt);
    if(rc != SQLITE_OK){
        printf("ERROR(%d) %s\n",rc,sqlite3_errmsg(db));
    }

    return true;
}


/**
 * main
 */
int main(void)
{
    const char* FILEPATH = "test.db";
 
    sqlite3 *db;
   int rc; //result codes

    rc = sqlite3_open(FILEPATH, &db);
    if(rc != SQLITE_OK){
        printf("cannot open: %s \n", FILEPATH);
        return EXIT_FAILURE;
    }

    select_testtable(db);

    sqlite3_close(db);

    return EXIT_SUCCESS;
}

// 1 aaa
// 2 bbb
// 3 ccc

