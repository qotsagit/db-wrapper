#ifndef __DB_H
#define __DB_H

// nazwy tabel
#define TABLE_USER				"user"
#define TABLE_USER_GROUP		"user_group"
#define TABLE_USER_GROUP_RIGHT	"user_group_right"
#define TABLE_USER_TO_GROUP		"user_to_group"
#define TABLE_RIGHT				"right"
#define TABLE_AREA				"area"
#define TABLE_SEAWAY			"seaway"
#define TABLE_HISTORY			"history"

#define TABLE_SYMBOL			"symbol"
#define TABLE_SYMBOL_ITEM		"symbol_item"
#define TABLE_SYMBOL_TYPE		"symbol_type"
#define TABLE_SYMBOL_LIGHT		"symbol_light"
#define TABLE_SYMBOL_PICTURE	"symbol_picture"
#define TABLE_SYMBOL_GROUP		"symbol_group"
#define TABLE_SYMBOL_TO_GROUP	"symbol_to_group"

#define TABLE_ITEM				"item"
#define TABLE_ITEM_TYPE			"item_type"
#define TABLE_ITEM_FEATURE		"item_feature"
#define TABLE_ITEM_TYPE_FEATURE	"item_type_feature"
#define TABLE_ITEM_VALUE		"item_value"
#define TABLE_PICTURE			"picture"

//nazwy widoków
#define VIEW_SYMBOL_ITEM			"_view_symbol_item"
	
// pola tabeli USER
#define FI_USER_ID					0
#define FI_USER_NICK				1
#define FI_USER_FIRST_NAME			2
#define FI_USER_LAST_NAME			3
#define FI_USER_PHONE				4
#define FI_USER_MOBILE_PHONE		5
#define FI_USER_ADDRESS				6
#define FI_USER_EMAIL				7
#define FI_USER_INFO				8
#define	FI_USER_EXPIRE_DATE			10
#define FI_USER_BUILT_IN			11
#define FN_USER_ID					"id"
#define FN_USER_NICK				"nick"
#define FN_USER_FIRST_NAME			"first_name"
#define FN_USER_LAST_NAME			"last_name"
#define FN_USER_PHONE				"phone"
#define FN_USER_MOBILE_PHONE		"mobile_phone"
#define FN_USER_ADDRESS				"address"
#define FN_USER_EMAIL				"email"
#define FN_USER_INFO				"info"
#define	FN_USER_EXPIRE_DATE			"expire_date"

//pola tabeli USER_GROUP
#define FI_USER_GROUP_ID			0
#define FI_USER_GROUP_NAME			1
#define FI_USER_GROUP_INFO			2
#define FN_USER_GROUP_ID			"id"
#define FN_USER_GROUP_NAME			"name"
#define FN_USER_GROUP_INFO			"info"

// pola tabeli USER_TO_GROUP
#define FI_USER_TO_GROUP_USER_ID	0
#define FI_USER_TO_GROUP_GROUP_ID	1

// pola tabeli RIGHT
#define FI_RIGHT_ID					0
#define FI_RIGHT_NAME				1
#define FI_RIGHT_INFO				2

// pola tabeli SYMBOL
// tabela staw,p³aw, itp
#define FI_SYMBOL_ID				0
#define FI_SYMBOL_ID_AREA			1
#define FI_SYMBOL_ID_SEAWAY			2
#define FI_SYMBOL_ID_SYMBOL_TYPE	3
#define FI_SYMBOL_NUMBER			4
#define FI_SYMBOL_LON				5
#define FI_SYMBOL_LAT				6
#define FI_SYMBOL_CHARACTERISTIC	7
#define FI_SYMBOL_ON_POSITION		8
#define FI_SYMBOL_IN_MONITORING		9
#define FI_SYMBOL_NAME				10
#define FI_SYMBOL_INFO				11
#define FN_SYMBOL_ID				"id"
#define FN_SYMBOL_ID_AREA			"id_area"
#define FN_SYMBOL_ID_SEAWAY			"id_seaway"
#define FN_SYMBOL_ID_SYMBOL_TYPE	"id_type"
#define FN_SYMBOL_NUMBER			"number"
#define FN_SYMBOL_LON				"lon"
#define FN_SYMBOL_LAT				"lat"
#define FN_SYMBOL_CHARACTERISTIC	"characteristic"
#define FN_SYMBOL_ON_POSITION		"on_position"
#define FN_SYMBOL_IN_MONITORING		"in_monitoring"
#define FN_SYMBOL_NAME				"name"
#define FN_SYMBOL_INFO				"info"

// pola tabeli AREA
#define FI_AREA_ID			0
#define FI_AREA_NAME		1
#define FI_AREA_INFO		2
#define FN_AREA_ID			"id"
#define FN_AREA_NAME		"name"
#define FN_AREA_INFO		"info"

// pola tabeli SEAWAY
#define FI_SEAWAY_ID		0
#define FI_SEAWAY_NAME		1
#define FI_SEAWAY_INFO		2
#define FN_SEAWAY_ID		"id"
#define FN_SEAWAY_NAME		"name"
#define FN_SEAWAY_INFO		"info"	

// pola tabeli SYMBOL_TYPE
#define FI_SYMBOL_TYPE_ID		0
#define FI_SYMBOL_TYPE_NAME		1
#define FI_SYMBOL_TYPE_INFO		2
#define FN_SYMBOL_TYPE_ID		"id"
#define FN_SYMBOL_TYPE_NAME		"name"
#define FN_SYMBOL_TYPE_INFO		"info"

//pola tabeli SYMBOL_ITEM
#define FI_SYMBOL_ITEM_ID		 0
#define FI_SYMBOL_ITEM_ID_SYMBOL 1
#define FI_SYMBOL_ITEM_ID_ITEM	 2
#define FN_SYMBOL_ITEM_ID		 "id"
#define FN_SYMBOL_ITEM_ID_SYMBOL "id_symbol"
#define FN_SYMBOL_ITEM_ID_ITEM	 "id_item"

// pola tabeli SYMBOL_PICTURE
#define FI_SYMBOL_PICTURE_ID_SYMBOL		0
#define FI_SYMBOL_PICTURE_ID_PICTURE	1
#define FN_SYMBOL_PICTURE_ID_SYMBOL		"id_symbol"
#define FN_SYMBOL_PICTURE_ID_PICTURE	"id_picture"

// pola tabeli SYMBOL_LIGHT
#define FI_SYMBOL_LIGHT_ID_SYMBOL		0
#define FI_SYMBOL_LIGHT_COLOR			1
#define FI_SYMBOL_LIGHT_COVERAGE		2
#define FI_SYMBOL_LIGHT_SECTOR_FROM		3
#define FI_SYMBOL_LIGHT_SECTOR_TO		4
#define FN_SYMBOL_LIGHT_ID_SYMBOL		"id_symbol"
#define FN_SYMBOL_LIGHT_COLOR			"color"
#define FN_SYMBOL_LIGHT_COVERAGE		"coverage"
#define FN_SYMBOL_LIGHT_SECTOR_FROM		"sector_from"
#define FN_SYMBOL_LIGHT_SECTOR_TO		"sector_to"

//pola tabeli SYMBOL_GROUP
#define FI_SYMBOL_GROUP_ID			0
#define FI_SYMBOL_GROUP_NAME		1
#define FI_SYMBOL_GROUP_INFO		2
#define FN_SYMBOL_GROUP_ID			"id"
#define FN_SYMBOL_GROUP_NAME		"name"
#define FN_SYMBOL_GROUP_INFO		"info"

// pola tabeli USER_TO_GROUP
#define FI_SYMBOL_GROUP_TO_SYMBOL_ID	0
#define FI_SYMBOL_GROUP_TO_GROUP_ID		1


// pola tabeli HISTORY
#define FI_HISTORY_ID_USER		0
#define FI_HISTORY_ID_RIGHT		1
#define FN_HISTORY_ID_USER		"id_user"
#define FN_HISTORY_ID_RIGHT		"id_right"

//pola tabeli ITEM
#define FI_ITEM_ID				0
#define FI_ITEM_ID_TYPE			1
#define FI_ITEM_NAME			2
#define FI_ITEM_TYPE			3
#define FI_ITEM_INFO			4
#define FN_ITEM_ID				"id"
#define FN_ITEM_ID_TYPE			"id_type"
#define FN_ITEM_NAME			"name"
#define FN_ITEM_TYPE			"type"
#define FN_ITEM_INFO			"info"

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

// pola tabeli ITEM_VALUE
#define FI_ITEM_VALUE_ID_ITEM		0
#define FI_ITEM_VALUE_ID_FEATURE	1
#define FI_ITEM_VALUE_VALUE			2
#define FN_ITEM_VALUE_ID_ITEM		"id_item"
#define FN_ITEM_VALUE_ID_FEATURE	"id_feature"
#define FN_ITEM_VALUE_VALUE			"value"

// pola tabeli ITEM_TYPE
#define FI_ITEM_TYPE_ID		0
#define FI_ITEM_TYPE_NAME	1
#define FI_ITEM_TYPE_INFO	2
#define FN_ITEM_TYPE_ID		"id"
#define FN_ITEM_TYPE_NAME	"name"
#define FN_ITEM_TYPE_INFO	"info"

// pola tabeli PICTURE
#define FI_PICTURE_ID		0
#define FI_PICTURE_NAME		1
#define FI_PICTURE_INFO		2
#define FI_PICTURE_DATA		3
#define FN_PICTURE_ID		"id"
#define FN_PICTURE_NAME		"name"
#define FN_PICTURE_INFO		"info"
#define FN_PICTURE_DATA		"data"

// pola tabeli SYMBOL_COLOR
//#define FI_SYMBOL_COLOR_ID_SYMBOL	0
//#define FI_SYMBOL_COLOR_COLOR		1
//#define FN_SYMBOL_COLOR_ID_SYMBOL	"id_symbol"
//#define FN_SYMBOL_COLOR_COLOR		"color"


// pola widoku _VIEW_SYMBOL_TYPE
#define FI_VIEW_SYMBOL_ITEM_ID			0
#define FI_VIEW_SYMBOL_ITEM_ID_SYMBOL	1
#define FI_VIEW_SYMBOL_ITEM_ITEM_TYPE	2
#define FI_VIEW_SYMBOL_ITEM_NAME		3
#define FI_VIEW_SYMBOL_ITEM_TYPE		4
#define FN_VIEW_SYMBOL_ITEM_ID			"id"
#define FN_VIEW_SYMBOL_ITEM_ID_SYMBOL	"id_symbol"
#define FN_VIEW_SYMBOL_ITEM_ITEM_TYPE	"item_type"
#define FN_VIEW_SYMBOL_ITEM_NAME		"name"
#define FN_VIEW_SYMBOL_ITEM_TYPE		"type"


void db_set_engine(int engine);
bool db_connect(const char *host, const char *user, const char *password, const char *db);
int db_query(const char *query);
int db_query(const char *query, unsigned long length);
void *db_fetch_row(void *result);
void *db_result();
const char *db_error();
int db_field_count();
long long db_num_rows(void *result);
void db_free_result(void *result);
void db_history(int uid, const char *module, const char *action );
bool my_query(wxString sql);
bool my_query(const char *sql, unsigned long length);
int db_last_insert_id();
unsigned long *db_fetch_lengths(void *result);
unsigned long db_escape_string(char *to ,const char *from, unsigned long len);

#endif