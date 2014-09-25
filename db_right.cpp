#include <wx/wx.h>
#include <stdio.h>
#include "mysql.h"
#include "db.h"
#include "db_conf.h"
#include "db_mysql.h"


//uprawnienia
bool db_check_right(const char *module, const char *action, int uid)
{
	// czy wbudowany user
	wxString query = wxString::Format(_("SELECT * FROM `%s` WHERE built_in = '1' AND id = '%d'"),TABLE_USER,uid);
	if(!my_query(query))
		return false;

	void *result = db_result();
	int count = db_num_rows(result);
	db_free_result(result);
	if(count == 1)
		return true;

	query = wxString::Format(_("SELECT * FROM `%s` WHERE name = '%s_%s'"),TABLE_RIGHT,module,action);
	if(!my_query(query))
		return false;

	result = db_result();
	count = db_num_rows(result);

	if(count == 0)
	{
		db_free_result(result);
		wxString query = wxString::Format(_("INSERT INTO `%s` SET name = '%s_%s'"),TABLE_RIGHT,module,action);
		my_query(query);
		return false;
		// nie ma rekordu z uprawnieniem
	}
	
	char **row  = (char**)db_fetch_row(result);
	query = wxString::Format(_("SELECT * FROM `%s`, `%s` WHERE %s.id_group = %s.id_group AND %s.id_user = '%d' AND %s.id_right='%s'"),TABLE_USER_GROUP, TABLE_GROUP_RIGHT,TABLE_USER_GROUP,TABLE_GROUP_RIGHT,TABLE_USER_GROUP,uid,TABLE_GROUP_RIGHT,row[FID_RIGHT_ID]);	
	db_free_result(result);
	
	if(!my_query(query))
		return false;

	result = db_result();
	count = db_num_rows(result);

	bool res = false;
	if(count > 0)
		res = true;
	
	return res;
}

