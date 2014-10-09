#include <Windows.h>
#include <stdio.h>
#include "mysql.h"
#include "db_mysql.h"

MYSQL *mySQL = NULL;

bool db_mysql_connect(const char *host, const char *user, const char *password, const char *db)
{
	mySQL = mysql_init(mySQL);
	mysql_real_connect(mySQL, host, user, password, db, 3306, NULL, 0);
    
    mysql_select_db(mySQL,db);

	if(mysql_errno(mySQL) !=0)
		return false;
        
    mysql_query(mySQL,"SET NAMES utf8  COLLATE utf_polish_ci");
    mysql_query(mySQL,"SET CHARACTER SET utf8");
			
	return true;

}

int db_mysql_query(const char *query)
{
	return mysql_query(mySQL,query);
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