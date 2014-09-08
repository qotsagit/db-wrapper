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
	return db_mysql_query(query);
}

const char *db_error()
{
	return db_mysql_error();
}