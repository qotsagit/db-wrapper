#include <wx/wx.h>
#include <Windows.h>
#include <stdio.h>
#include "mysql.h"
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


// taki ma³y wraper ¿eby nie pisaæ ci¹gle tego samego
bool my_query(wxString sql)
{
#ifdef DEBUG_SQL
	wxMessageBox (sql);
#endif
	
	if(db_query(sql.mb_str(wxConvUTF8))  != 0)
	{
		wxLogError(db_error());
		return false;
	}
	
	return true;
}

// taki ma³y wraper ¿eby nie pisaæ ci¹gle tego samego
bool my_query(const char *sql, unsigned long length)
{
#ifdef DEBUG_SQL
	wxMessageBox (sql);
#endif
	
	if(db_query( sql, length)  != 0)
	{
		wxLogError(db_error());
		return false;
	}
	
	return true;
}


void db_history(int uid, const char *module, const char *action )
{
	wxString sql = wxString::Format(_("SELECT * FROM `%s` WHERE name='%s_%s'"),TABLE_RIGHT,module,action);
	my_query(sql);

	void *result = db_result();
	char **row = (char**)db_fetch_row(result);
	
	sql = wxString::Format(_("INSERT INTO `%s` SET id_user='%d', id_right='%s'"),TABLE_HISTORY, uid, row[FI_RIGHT_ID]);
	my_query(sql);
		

	db_free_result(result);

}