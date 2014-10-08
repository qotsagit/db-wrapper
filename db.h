#ifndef __DB_H
#define __DB_H

// nazwy tabel
#define TABLE_USER				"user"
#define TABLE_GROUP				"group"
#define TABLE_GROUP_RIGHT		"group_right"
#define TABLE_USER_GROUP		"user_group"
#define TABLE_RIGHT				"right"
#define TABLE_SYMBOL			"symbol"
#define TABLE_AREA				"area"
#define TABLE_SEAWAY			"seaway"
#define TABLE_HISTORY			"history"
#define TABLE_LIGHT				"light"
#define TABLE_SYMBOL_TYPE		"symbol_type"
#define TABLE_ITEM				"item"
#define TABLE_ITEM_TYPE			"item_type"
#define TABLE_ITEM_FEATURE		"item_feature"
#define TABLE_ITEM_TYPE_FEATURE	"item_type_feature"
	
// pola tabeli USER
#define FI_USER_ID					0
#define FI_USER_NICK				1
#define FI_USER_FIRST_NAME			2
#define FI_USER_LAST_NAME			3
#define FI_USER_PHONE				4
#define FI_USER_MOBILE_PHONE		5
#define FI_USER_ADDRESS			6
#define FI_USER_EMAIL				7
#define FI_USER_INFO				8
#define	FI_USER_EXPIRE_DATE		10
#define FI_USER_BUILT_IN			11
#define FN_USER_ID				"id"
#define FN_USER_NICK				"nick"
#define FN_USER_FIRST_NAME		"first_name"
#define FN_USER_LAST_NAME		"last_name"
#define FN_USER_PHONE			"phone"
#define FN_USER_MOBILE_PHONE		"mobile_phone"
#define FN_USER_ADDRESS			"address"
#define FN_USER_EMAIL			"email"
#define FN_USER_INFO				"info"
#define	FN_USER_EXPIRE_DATE		"expire_date"

//pola tabeli GROUP
#define FI_GROUP_ID				0
#define FI_GROUP_NAME				1
#define FI_GROUP_INFO				2
#define FN_GROUP_ID				"id"
#define FN_GROUP_NAME			"name"
#define FN_GROUP_INFO			"info"

// pola tabeli USER_GROUP
#define FI_USER_GROUP_USER_ID		0
#define FI_USER_GROUP_GROUP_ID		1

// pola tabeli RIGHT
#define FI_RIGHT_ID				0
#define FI_RIGHT_NAME				1
#define FI_RIGHT_INFO				2

// pola tabeli SYMBOL
// tabela staw,p�aw, itp
#define FI_SYMBOL_ID				0
#define FI_SYMBOL_ID_AREA			1
#define FI_SYMBOL_ID_SEAWAY		2
#define FI_SYMBOL_ID_TYPE			3
#define FI_SYMBOL_NUMBER			4
#define FI_SYMBOL_LON				5
#define FI_SYMBOL_LAT				6
#define FN_SYMBOL_ID				"id"
#define FN_SYMBOL_ID_AREA		"id_area"
#define FN_SYMBOL_ID_SEAWAY		"id_seaway"
#define FN_SYMBOL_ID_TYPE		"id_type"
#define FN_SYMBOL_NUMBER			"number"
#define FN_SYMBOL_LON			"lon"
#define FN_SYMBOL_LAT			"lat"

// pola tabeli AREA
#define FI_AREA_ID			0
#define FI_AREA_NAME		1
#define FI_AREA_INFO		2
#define FN_AREA_ID		"id"
#define FN_AREA_NAME		"name"
#define FN_AREA_INFO		"info"

// pola tabeli SEAWAY
#define FI_SEAWAY_ID		0
#define FI_SEAWAY_NAME		1
#define FI_SEAWAY_INFO		2
#define FN_SEAWAY_ID		"id"
#define FN_SEAWAY_NAME	"name"
#define FN_SEAWAY_INFO	"info"	

// pola tabeli SYMBOL_TYPE
#define FI_SYMBOL_TYPE_ID			0
#define FI_SYMBOL_TYPE_NAME		1
#define FI_SYMBOL_TYPE_INFO		2
#define FN_SYMBOL_TYPE_ID		"id"
#define FN_SYMBOL_TYPE_NAME		"name"
#define FN_SYMBOL_TYPE_INFO		"info"

// pola tabeli HISTORY
#define FI_HISTORY_ID_USER			0
#define FI_HISTORY_ID_RIGHT		1
#define FN_HISTORY_ID_USER		"id_user"
#define FN_HISTORY_ID_RIGHT		"id_right"

//pola tabeli LIGHT
#define FI_LIGHT_ID		0
#define FI_LIGHT_NAME		1
#define FI_LIGHT_INFO		2
#define FN_LIGHT_ID		"id"
#define FN_LIGHT_NAME	"name"
#define FN_LIGHT_INFO	"info"

//pola tabeli ITEM
#define FI_ITEM_ID	0
#define FI_ITEM_ID_ITEM_TYPE 1
#define FI_ITEM_NAME		2
#define FI_ITEM_TYPE		3
#define FI_ITEM_INFO		4
#define FN_ITEM_ID			"id"
#define FN_ITEM_ID_TYPE		"id_type"
#define FN_ITEM_NAME		"name"
#define FN_ITEM_TYPE		"type"
#define FN_ITEM_INFO		"info"

// pola tabeli ITEM_TYPE_FEATURE
#define FI_ITEM_TYPE_FEATURE_ID		0
#define FI_ITEM_TYPE_FEATURE_NAME	1
#define FN_ITEM_TYPE_FEATURE_ID		"id_type"
#define FN_ITEM_TYPE_FEATURE_NAME	"id_feature"

// pola tabeli ITEM_FEATURE
#define FI_ITEM_FEATURE_ID		0
#define FI_ITEM_FEATURE_NAME	1
#define FN_ITEM_FEATURE_ID		"id"
#define FN_ITEM_FEATURE_NAME	"id_name"


// pola tabeli ITEM_TYPE
#define FI_ITEM_TYPE_ID 0
#define FI_ITEM_TYPE_NAME 1
#define FN_ITEM_TYPE_ID 0
#define FN_ITEM_TYPE_NAME 1





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