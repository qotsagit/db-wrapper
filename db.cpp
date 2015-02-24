#include "db.h"
#include "db_conf.h"
#include "db_mysql.h"


int m_engine = DB_ENGINE_MYSQL;
void *db_init(void *_db)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_init((MYSQL*)_db);
		default:				return db_mysql_init((MYSQL*)_db);
	}
}

bool db_connect(void *_db,const char *host, const char *user, const char *password, const char *db,int port)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_connect((MYSQL*)_db,host,user,password,db,port);
		default:				return db_mysql_connect((MYSQL*)_db,host,user,password,db,port);
	}
}

void db_close(void *_db)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_close((MYSQL*)_db);
		default:				return db_mysql_close((MYSQL*)_db);
	}
}

int db_query(void *_db,const char *query)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_query((MYSQL*)_db,query);
		default:				return db_mysql_query((MYSQL*)_db,query);
	}
}

int db_query(void *_db,const char *query, unsigned long length)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_query((MYSQL*)_db,query,length);
		default:				return db_mysql_query((MYSQL*)_db,query,length);
	}
}

void *db_result(void *_db)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_result((MYSQL*)_db);
		default :				return db_mysql_result((MYSQL*)_db);
	}
}

const char *db_error(void *_db)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_error((MYSQL*)_db);
		default:				return db_mysql_error((MYSQL*)_db);
	}
}

int db_field_count(void *_db)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_field_count((MYSQL*)_db);
		default:				return db_mysql_field_count((MYSQL*)_db);
	}
}

int db_last_insert_id(void *_db)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_insert_id((MYSQL*)_db);
		default:				return db_mysql_insert_id((MYSQL*)_db);
	}
}

int db_ping(void *_db)
{
	switch(m_engine)
	{
		case DB_ENGINE_MYSQL:	return db_mysql_ping((MYSQL*)_db);
		default:				return db_mysql_ping((MYSQL*)_db);
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



CDB::CDB()
{
	mySQL = (MYSQL*)db_init(mySQL);
}

bool CDB::Connect(const char *host, const char *user, const char *password, const char *db, int port)
{
	return db_connect(mySQL, host, user, password, db,port);
}
