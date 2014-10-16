#ifndef __DB_MYSQL_H
#define __DB_MYSQL_H

bool db_mysql_connect(const char *host, const char *user, const char *password, const char *db);
int db_mysql_query(const char *query);
int db_mysql_query(const char *query, unsigned long length);
const char *db_mysql_error();
int db_mysql_field_count();
long long db_mysql_num_rows(void *result);
MYSQL_ROW db_mysql_fetch_row(MYSQL_RES *result);
MYSQL_RES *db_mysql_result();
void db_mysql_free_result(void *result);
long long db_mysql_insert_id();
unsigned long *db_mysql_fetch_lengths(void *result);
unsigned long  db_mysql_escape_string(char *to ,const char *from, unsigned long len);
#endif