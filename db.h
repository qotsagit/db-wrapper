#ifndef __DB_H
#define __DB_H

// pola tabeli USER
#define FID_USER_ID					0
#define FID_USER_NICK				1
#define FID_USER_FIRST_NAME			2
#define FID_USER_LAST_NAME			3
#define FID_USER_PHONE				4
#define FID_USER_MOBILE_PHONE		5
#define FID_USER_ADDRESS			6
#define FID_USER_EMAIL				7
#define FID_USER_INFO				8
#define	FID_USER_EXPIRE_DATE		10

#define FNAME_USER_ID				"id"
#define FNAME_USER_NICK				"nick"
#define FNAME_USER_FIRST_NAME		"first_name"
#define FNAME_USER_LAST_NAME		"last_name"
#define FNAME_USER_PHONE			"phone"
#define FNAME_USER_MOBILE_PHONE		"mobile_phone"
#define FNAME_USER_ADDRESS			"address"
#define FNAME_USER_EMAIL			"email"
#define FNAME_USER_INFO				"info"
#define	FNAME_USER_EXPIRE_DATE		"expire_date"


//pola tabeli GROUP
#define FID_GROUP_ID		0
#define FID_GROUP_NAME		1
#define FID_GROUP_INFO		2
//nazwy pól
#define FNAME_GROUP_ID		"id"
#define FNAME_GROUP_NAME	"name"
#define FNAME_GROUP_INFO	"info"


// pola tabeli USER_GROUP
#define FID_USER_GROUP_USER_ID	0
#define FID_USER_GROUP_GROUP_ID	1

// pola tabeli RIGHT
#define FID_RIGHT_ID	0
#define FID_RIGHT_NAME	1
#define FID_RIGHT_INFO	2

// nazwy tabel
#define TABLE_USER "navi_vts.user"
#define TABLE_GROUP "navi_vts.group"
#define TABLE_GROUP_RIGHT "navi_vts.group_right"
#define TABLE_USER_GROUP "navi_vts.user_group"
#define TABLE_RIGHT "navi_vts.right"


void db_set_engine(int engine);
bool db_connect(const char *host, const char *user, const char *password, const char *db);
int db_query(const char *query);
void *db_fetch_row(void *result);
void *db_result();
const char *db_error();
int db_field_count();
long long db_num_rows(void *result);
void db_free_result(void *result);
bool my_query(wxString sql);
#endif