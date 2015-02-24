#ifndef __DB_H
#define __DB_H

#ifdef WIN32
#include <Windows.h>
#include <wx/wx.h>
#include "mysql.h"
#endif
#include <stdio.h>
#ifdef linux
#include "mysql/mysql.h"
#endif

void *db_init(void *_db);
void db_set_engine(int engine);
bool db_connect(void *_db,const char *host, const char *user, const char *password, const char *db, int port);
void db_close(void *_db);
int db_query(void *_db,const char *query);
int db_query(void *_db,const char *query, unsigned long length);
void *db_result(void *_db);
int db_ping(void *_db);
const char *db_error(void *_db);
int db_field_count(void *_db);
int db_last_insert_id(void *_db);
void *db_fetch_row(void *result);
long long db_num_rows(void *result);
void db_free_result(void *result);
unsigned long *db_fetch_lengths(void *result);
unsigned long db_escape_string(char *to ,const char *from, unsigned long len);


class CDB
{

	MYSQL *mySQL;

public:
		CDB();
		bool Connect(const char *host, const char *user, const char *password, const char *db, int port);
		int Query(const char *query);
		int Query(const char *query, unsigned long length);


};

#endif