#ifndef __DB_H
#define __DB_H

void db_set_engine(int engine);
bool db_connect(const char *host, const char *user, const char *password, const char *db);
int db_query(const char *query);
const char *db_error();

#endif