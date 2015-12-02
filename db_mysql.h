#ifndef __DB_MYSQL_H
#define __DB_MYSQL_H

#ifdef WIN32
#include <Windows.h>
#include "mysql.h"
#endif
#include <stdio.h>
#ifdef linux
#include "mysql/mysql.h"
#endif

MYSQL *db_mysql_init(MYSQL *mySQL);
void db_mysql_log(const char *format ,... );
bool db_mysql_connect(MYSQL *mySQL,const char *host, const char *user, const char *password, const char *db, int port );
void db_mysql_close(MYSQL *mySQL);
int db_mysql_query(MYSQL *mySQL,const char *query);
int db_mysql_query(MYSQL *mySQL,const char *query, unsigned long length);
const char *db_mysql_error(MYSQL *mySQL);
MYSQL_RES *db_mysql_result(MYSQL *mySQL);
int db_mysql_field_count(MYSQL *mySQL);
long long db_mysql_insert_id(MYSQL *mySQL);
int db_mysql_ping(MYSQL *mySQL);

long long db_mysql_num_rows(void *result);
MYSQL_ROW db_mysql_fetch_row(MYSQL_RES *result);
void db_mysql_free_result(void *result);
unsigned long *db_mysql_fetch_lengths(void *result);
unsigned long  db_mysql_escape_string(char *to ,const char *from, unsigned long len);

#endif