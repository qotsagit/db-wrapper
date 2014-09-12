#ifndef __DB_MYSQL_H
#define __DB_MYSQL_H

bool db_mysql_connect(const char *host, const char *user, const char *password, const char *db);
int db_mysql_query(const char *query);
const char *db_mysql_error();
int db_mysql_field_count();
long long db_mysql_num_rows(void *result);
MYSQL_ROW db_mysql_fetch_row(MYSQL_RES *result);
MYSQL_RES *db_mysql_result();
void db_mysql_free_result(void *result);


#endif