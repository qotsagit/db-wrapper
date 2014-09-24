#ifndef __DB_H
#define __DB_H

// nazwy tabel
#define TABLE_USER					"user"
#define TABLE_GROUP					"group"
#define TABLE_GROUP_RIGHT			"group_right"
#define TABLE_USER_GROUP			"user_group"
#define TABLE_RIGHT					"right"
#define TABLE_OBJECT				"object"
#define TABLE_AREA					"area"
#define TABLE_SEAWAY				"seaway"
#define TABLE_HISTORY				"history"
#define TABLE_LIGHT					"light"
#define TABLE_BATTERY				"battery"

// pola tabeli USER.....................................

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
#define FID_USER_BUILT_IN			11
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

//pola tabeli GROUP ..................................

#define FID_GROUP_ID				0
#define FID_GROUP_NAME				1
#define FID_GROUP_INFO				2
#define FNAME_GROUP_ID				"id"
#define FNAME_GROUP_NAME			"name"
#define FNAME_GROUP_INFO			"info"

// pola tabeli USER_GROUP............................

#define FID_USER_GROUP_USER_ID		0
#define FID_USER_GROUP_GROUP_ID		1

// pola tabeli RIGHT.................................

#define FID_RIGHT_ID				0
#define FID_RIGHT_NAME				1
#define FID_RIGHT_INFO				2

// pola tabeli OBJECTS...............................
// tabela staw,p³aw, itp
#define FID_OBJECT_ID				0
#define FID_OBJECT_ID_AREA			1
#define FID_OBJECT_ID_SEAWAY		2
#define FID_OBJECT_ID_TYPE			3
#define FID_OBJECT_NUMBER			4
#define FID_OBJECT_LON				5
#define FID_OBJECT_LAT				6
#define FNAME_OBJECT_ID				"id"
#define FNAME_OBJECT_ID_AREA		"id_area"
#define FNAME_OBJECT_ID_SEAWAY		"id_seaway"
#define FNAME_OBJECT_ID_TYPE		"id_type"
#define FNAME_OBJECT_NUMBER			"number"
#define FNAME_OBJECT_LON			"lon"
#define FNAME_OBJECT_LAT			"lat"

// pola tabeli AREA..........................

#define FID_AREA_ID			0
#define FID_AREA_NAME		1
#define FID_AREA_INFO		2
#define FNAME_AREA_ID		"id"
#define FNAME_AREA_NAME		"name"
#define FNAME_AREA_INFO		"info"

// pola tabeli SEAWAY........................

#define FID_SEAWAY_ID		0
#define FID_SEAWAY_NAME		1
#define FID_SEAWAY_INFO		2
#define FNAME_SEAWAY_ID		"id"
#define FNAME_SEAWAY_NAME	"name"
#define FNAME_SEAWAY_INFO	"info"	

// pola tabeli TYPE........................

#define FID_TYPE_ID			0
#define FID_TYPE_NAME		1
#define FNAME_TYPE_ID		"id"
#define FNAME_TYPE_NAME		"name"

//pola tabeli BATTERY...........................

#define FID_BATTERY_ID			0
#define FID_BATTERY_NAME		1
#define FID_BATTERY_TYPE		2
#define FID_BATTERY_CAPACITY	3
#define FID_BATTERY_INFO		4

#define FNAME_BATTERY_ID		"id"
#define FNAME_BATTERY_NAME		"name"
#define FNAME_BATTERY_TYPE		"type"
#define FNAME_BATTERY_CAPACITY	"capacity"
#define FNAME_BATTERY_INFO		"info"

// pola tabeli HISTORY.............................

#define FID_HISTORY_ID_USER			0
#define FID_HISTORY_ID_RIGHT		1

#define FNAME_HISTORY_ID_USER		"id_user"
#define FNAME_HISTORY_ID_RIGHT		"id_right"

//pola tabeli LIGHT................................

#define FID_LIGHT_ID			0
#define FID_LIGHT_NAME			1
#define FID_LIGHT_INFO			2
#define FNAME_LIGHT_ID		"id"
#define FNAME_LIGHT_NAME	"name"
#define FNAME_LIGHT_INFO	"info"





void db_set_engine(int engine);
bool db_connect(const char *host, const char *user, const char *password, const char *db);
int db_query(const char *query);
void *db_fetch_row(void *result);
void *db_result();
const char *db_error();
int db_field_count();
long long db_num_rows(void *result);
void db_free_result(void *result);
void db_history(int uid, const char *module, const char *action );
bool my_query(wxString sql);
#endif