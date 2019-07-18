/*
 * test.c
 *
 *  Created on: 2018��1��29��
 *      Author: Administrator
 */

#include <stdio.h>
#include "sqlite3.h"

int main(int argc, char* argv[])
{
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open("testDB.db",&db);

   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(0);
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(db);
}
