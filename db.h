#ifndef __DB_H
#define __DB_H

void db_set_engine(int engine);
bool db_connect(const char *host, const char *user, const char *password, const char *db, int port);
void db_close();
int db_query(const char *query);
int db_query(const char *query, unsigned long length);
void *db_fetch_row(void *result);
void *db_result();
const char *db_error();
int db_field_count();
long long db_num_rows(void *result);
void db_free_result(void *result);
int db_last_insert_id();
unsigned long *db_fetch_lengths(void *result);
unsigned long db_escape_string(char *to ,const char *from, unsigned long len);
void *db_get();
void db_set(void *db);

#endif