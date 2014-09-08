#ifndef __DB_MYSQL_H
#define __DB_MYSQL_H

bool db_mysql_connect(const char *host, const char *user, const char *password, const char *db);
int db_mysql_query(const char *query);
const char *db_mysql_error();

#endif