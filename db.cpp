#include <Windows.h>
#include <stdio.h>
#include "mysql.h"
#include "db.h"
#include "db_conf.h"
#include "db_mysql.h"


int m_engine = DB_ENGINE_MYSQL;

bool db_connect(const char *host, const char *user, const char *password, const char *db)
{
	
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_connect(host,user,password,db);
		default:				return db_mysql_connect(host,user,password,db);

	}

}

int db_query(const char *query)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_query(query);
		default:				return db_mysql_query(query);
	}
}

void *db_fetch_row(void *result)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return (void*)db_mysql_fetch_row((MYSQL_RES*)result);
		default:				return (void*)db_mysql_fetch_row((MYSQL_RES*)result);
	}
}

void *db_result()
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_result();
		default :				return db_mysql_result();
	}
}

const char *db_error()
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_error();
		default:				return db_mysql_error();
	}
}

int db_field_count()
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_field_count();
		default:				return db_mysql_field_count();
	}

}