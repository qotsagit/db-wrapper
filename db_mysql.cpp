#ifdef WIN32
#include <Windows.h>
#endif
#include <stdio.h>
#include "mysql/mysql.h"
#include "db_mysql.h"

MYSQL *mySQL = NULL;

bool db_mysql_connect(const char *host, const char *user, const char *password, const char *db, int port )
{
	if(mySQL == NULL)
		mySQL = mysql_init(mySQL);
	mysql_real_connect(mySQL, host, user, password, db, port, NULL, 0);
	mysql_ssl_set(mySQL, "client-key.pem", "client-cert.pem", "ca-cert.pem", NULL, "DHE-RSA-AES256-SHA"); // zawsze zwraca zero
    
    mysql_select_db(mySQL,db);

	if(mysql_errno(mySQL) !=0)
		return false;
        
    mysql_query(mySQL,"SET NAMES utf8  COLLATE utf_polish_ci");
    mysql_query(mySQL,"SET CHARACTER SET utf8");
			
	return true;

}

void db_mysql_close()
{
	if(mySQL)
	{
		mysql_close(mySQL);
		mySQL = NULL;
	}
}

int db_mysql_query(const char *query)
{
	return mysql_query(mySQL,query);
}

int db_mysql_query(const char *query, unsigned long length)
{
	return mysql_real_query(mySQL,query,length);
}

const char *db_mysql_error()
{
	return mysql_error(mySQL);
}

MYSQL_RES *db_mysql_result()
{
	return mysql_store_result(mySQL);
}

MYSQL_ROW db_mysql_fetch_row(MYSQL_RES *result)
{
	return mysql_fetch_row(result);

}

int db_mysql_field_count()
{
	return mysql_field_count(mySQL);
}

long long db_mysql_num_rows(void *result)
{
	return mysql_num_rows((MYSQL_RES*)result);
}

void db_mysql_free_result(void *result)
{
	mysql_free_result((MYSQL_RES*)result);
}

long long db_mysql_insert_id()
{
	return mysql_insert_id(mySQL);
}

unsigned long *db_mysql_fetch_lengths(void *result)
{
	return mysql_fetch_lengths((MYSQL_RES*)result);
}

unsigned long  db_mysql_escape_string(char *to ,const char *from, unsigned long len)
{
	return mysql_escape_string(to,from,len);
}
