
#ifdef WIN32
#include <Windows.h>
#include <wx/wx.h>
#endif
#include <stdio.h>
#include "mysql/mysql.h"
#include "db.h"
#include "db_conf.h"
#include "db_mysql.h"


int m_engine = DB_ENGINE_MYSQL;

bool db_connect(const char *host, const char *user, const char *password, const char *db,int port)
{
	
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_connect(host,user,password,db,port);
		default:				return db_mysql_connect(host,user,password,db,port);

	}

}

void db_close()
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_close();
		default:				return db_mysql_close();
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

int db_query(const char *query, unsigned long length)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_query(query,length);
		default:				return db_mysql_query(query,length);
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

long long db_num_rows(void *result)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_num_rows(result);
		default:				return db_mysql_num_rows(result);
	}

}

void db_free_result(void *result)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_free_result(result);
		default:				return db_mysql_free_result(result);
	}
}

int db_last_insert_id()
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_insert_id();
		default:				return db_mysql_insert_id();
	}
}

unsigned long *db_fetch_lengths(void *result)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_fetch_lengths(result);
		default:				return db_mysql_fetch_lengths(result);
	}
}

unsigned long db_escape_string(char *to ,const char *from, unsigned long len)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_escape_string(to,from,len);
		default:				return db_mysql_escape_string(to,from,len);
	}
}


