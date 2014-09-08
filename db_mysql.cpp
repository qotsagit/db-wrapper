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
        
    mysql_query(mySQL,"SET NAMES utf8");
    mysql_query(mySQL,"SET CHARACTER SET utf8");

	return true;

}

int db_mysql_query(const char *query)
{
	return	mysql_query(mySQL,query);

}

const char *db_mysql_error()
{
	return mysql_error(mySQL);
}