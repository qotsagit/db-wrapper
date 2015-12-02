#ifdef WIN32
#include <Windows.h>
#include "mysql.h"
#endif
#include <stdio.h>
#ifdef linux
#include "mysql/mysql.h"
#endif
#include "db_mysql.h"
#include "db_conf.h"
#include "db.h"


MYSQL *db_mysql_init(MYSQL *mySQL)
{
	return  mysql_init(mySQL);
}

bool db_mysql_connect(MYSQL *mySQL,const char *host, const char *user, const char *password, const char *db, int port )
{
	mysql_options(mySQL,MYSQL_OPT_RECONNECT,"1");
	mysql_real_connect(mySQL, host, user, password, db, port, NULL, 0);
	//mysql_ssl_set(mySQL, "client-key.pem", "client-cert.pem", "ca-cert.pem", NULL, "DHE-RSA-AES256-SHA"); // zawsze zwraca zero
    
    mysql_select_db(mySQL,db);
	int err = mysql_errno(mySQL);
	if(err !=0)
		return false;
        
    mysql_query(mySQL,"SET NAMES utf8  COLLATE utf_polish_ci");
    mysql_query(mySQL,"SET CHARACTER SET utf8");
			
	return true;
}

void db_mysql_log(const char *format ,... )
{
	FILE *f = fopen(DB_ALTER_LOG_FILE,"ab");
    if(f == NULL)
	{
		return;
    }
	
	va_list args;
    va_start(args,format);

	time_t now = time(NULL);
	tm t = *localtime(&now);
	fprintf(f,"%04d-%02d-%02d %02d:%02d:%02d ",t.tm_year + 1900,t.tm_mon + 1,t.tm_mday,t.tm_hour,t.tm_min,t.tm_sec);
	vfprintf(f,format,args);
    
    fclose(f);
    va_end(args);


}

void db_mysql_close(MYSQL *mySQL)
{
	if(mySQL)
	{
		mysql_close(mySQL);
		mySQL = NULL;
	}
}

int db_mysql_query(MYSQL *mySQL,const char *query)
{
	return mysql_query(mySQL,query);
}

int db_mysql_query(MYSQL *mySQL,const char *query, unsigned long length)
{
	return mysql_real_query(mySQL,query,length);
}

const char *db_mysql_error(MYSQL *mySQL)
{
	return mysql_error(mySQL);
}

MYSQL_RES *db_mysql_result(MYSQL *mySQL)
{
	return mysql_store_result(mySQL);
}

int db_mysql_field_count(MYSQL *mySQL)
{
	return mysql_field_count(mySQL);
}

long long db_mysql_insert_id(MYSQL *mySQL)
{
	return mysql_insert_id(mySQL);
}

MYSQL_ROW db_mysql_fetch_row(MYSQL_RES *result)
{
	return mysql_fetch_row(result);
}

long long db_mysql_num_rows(void *result)
{
	return mysql_num_rows((MYSQL_RES*)result);
}

void db_mysql_free_result(void *result)
{
	mysql_free_result((MYSQL_RES*)result);
}

unsigned long *db_mysql_fetch_lengths(void *result)
{
	return mysql_fetch_lengths((MYSQL_RES*)result);
}

unsigned long  db_mysql_escape_string(char *to ,const char *from, unsigned long len)
{
	return mysql_escape_string(to,from,len);
}

int  db_mysql_ping(MYSQL *mySQL)
{
	return mysql_ping(mySQL);
}