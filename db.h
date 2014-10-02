#ifndef __DB_H
#define __DB_H

// nazwy tabel
#define TABLE_USER					"user"
#define TABLE_GROUP					"group"
#define TABLE_GROUP_RIGHT			"group_right"
#define TABLE_USER_GROUP			"user_group"
#define TABLE_RIGHT					"right"
#define TABLE_SYMBOL				"symbol"
#define TABLE_AREA					"area"
#define TABLE_SEAWAY				"seaway"
#define TABLE_HISTORY				"history"
#define TABLE_LIGHT					"light"
#define TABLE_BATTERY				"battery"
#define TABLE_COMMUNICATION			"communication"
#define TABLE_FLASH					"flash"
#define TABLE_BULB					"bulb"
#define TABLE_SYMBOL_TYPE			"symbol_type"
#define TABLE_LANTERN				"lantern"
#define TABLE_CHANGER				"changer"
#define TABLE_SOLAR					"solar"
#define TABLE_REGULATOR				"regulator"
#define TABLE_AC_ADAPTER			"ac_adapter"
#define TABLE_SYNCHRONIZATION		"synchronization"
#define TABLE_TELEMETRY				"telemetry"
#define TABLE_COLLECTION			"collection"
#define TABLE_ANTENNA				"antenna"
#define TABLE_LIGHTNING				"lightning"
#define TABLE_WIND_GENERATOR		"wind_generator"
#define TABLE_NAUTOFON				"nautofon"
	
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

//pola tabeli GROUP
#define FID_GROUP_ID				0
#define FID_GROUP_NAME				1
#define FID_GROUP_INFO				2
#define FNAME_GROUP_ID				"id"
#define FNAME_GROUP_NAME			"name"
#define FNAME_GROUP_INFO			"info"

// pola tabeli USER_GROUP
#define FID_USER_GROUP_USER_ID		0
#define FID_USER_GROUP_GROUP_ID		1

// pola tabeli RIGHT
#define FID_RIGHT_ID				0
#define FID_RIGHT_NAME				1
#define FID_RIGHT_INFO				2

// pola tabeli SYMBOL
// tabela staw,p³aw, itp
#define FID_SYMBOL_ID				0
#define FID_SYMBOL_ID_AREA			1
#define FID_SYMBOL_ID_SEAWAY		2
#define FID_SYMBOL_ID_TYPE			3
#define FID_SYMBOL_NUMBER			4
#define FID_SYMBOL_LON				5
#define FID_SYMBOL_LAT				6
#define FNAME_SYMBOL_ID				"id"
#define FNAME_SYMBOL_ID_AREA		"id_area"
#define FNAME_SYMBOL_ID_SEAWAY		"id_seaway"
#define FNAME_SYMBOL_ID_TYPE		"id_type"
#define FNAME_SYMBOL_NUMBER			"number"
#define FNAME_SYMBOL_LON			"lon"
#define FNAME_SYMBOL_LAT			"lat"

// pola tabeli AREA
#define FID_AREA_ID			0
#define FID_AREA_NAME		1
#define FID_AREA_INFO		2
#define FNAME_AREA_ID		"id"
#define FNAME_AREA_NAME		"name"
#define FNAME_AREA_INFO		"info"

// pola tabeli SEAWAY
#define FID_SEAWAY_ID		0
#define FID_SEAWAY_NAME		1
#define FID_SEAWAY_INFO		2
#define FNAME_SEAWAY_ID		"id"
#define FNAME_SEAWAY_NAME	"name"
#define FNAME_SEAWAY_INFO	"info"	

// pola tabeli SYMBOL_TYPE
#define FID_SYMBOL_TYPE_ID			0
#define FID_SYMBOL_TYPE_NAME		1
#define FID_SYMBOL_TYPE_INFO		2
#define FNAME_SYMBOL_TYPE_ID		"id"
#define FNAME_SYMBOL_TYPE_NAME		"name"
#define FNAME_SYMBOL_TYPE_INFO		"info"

//pola tabeli BATTERY
#define FID_BATTERY_ID			0
#define FID_BATTERY_TYPE		1
#define FID_BATTERY_CAPACITY	2
#define FID_BATTERY_INFO		3
#define FNAME_BATTERY_ID		"id"
#define FNAME_BATTERY_TYPE		"type"
#define FNAME_BATTERY_CAPACITY	"capacity"
#define FNAME_BATTERY_INFO		"info"

// pola tabeli HISTORY
#define FID_HISTORY_ID_USER			0
#define FID_HISTORY_ID_RIGHT		1
#define FNAME_HISTORY_ID_USER		"id_user"
#define FNAME_HISTORY_ID_RIGHT		"id_right"

//pola tabeli LIGHT
#define FID_LIGHT_ID			0
#define FID_LIGHT_NAME			1
#define FID_LIGHT_INFO			2
#define FNAME_LIGHT_ID		"id"
#define FNAME_LIGHT_NAME	"name"
#define FNAME_LIGHT_INFO	"info"

//pola tabeli COMMUNICATION
#define FID_COMMUNICATION_ID		0
#define FID_COMMUNICATION_NAME		1
#define FID_COMMUNICATION_INFO		2
#define FNAME_COMMUNICATION_ID		"id"
#define FNAME_COMMUNICATION_NAME	"name"
#define FNAME_COMMUNICATION_INFO	"info"

//pola tabeli BULB
#define FID_BULB_ID			0
#define FID_BULB_TYPE		1
#define FID_BULB_VOLTAGE	2
#define FID_BULB_POWER		3
#define FID_BULB_INFO		4
#define FNAME_BULB_ID		"id"
#define FNAME_BULB_TYPE		"type"
#define FNAME_BULB_VOLTAGE	"voltage"
#define FNAME_BULB_POWER	"power"
#define FNAME_BULB_INFO		"info"

// pola tabeli FLASH
#define FID_FLASH_ID		0
#define FID_FLASH_TYPE		1
#define FID_FLASH_INFO		2
#define FNAME_FLASH_ID		"id"
#define FNAME_FLASH_TYPE	"type"
#define FNAME_FLASH_INFO	"info"

//pola tabeli LANTERN
#define FID_LANTERN_ID		0
#define FID_LANTERN_TYPE	1
#define FID_LANTERN_INFO	2
#define FNAME_LANTERN_ID	"id"
#define FNAME_LANTERN_TYPE	"type"
#define FNAME_LANTERN_INFO	"info"

//pola tabeli CHANGER
#define FID_CHANGER_ID		0
#define FID_CHANGER_TYPE	1
#define FID_CHANGER_INFO	2
#define FNAME_CHANGER_ID	"id"
#define FNAME_CHANGER_TYPE	"type"
#define FNAME_CHANGER_INFO	"info"

//pola tabeli SOLAR
#define FID_SOLAR_ID		0
#define FID_SOLAR_TYPE		1
#define FID_SOLAR_INFO		2
#define FNAME_SOLAR_ID		"id"
#define FNAME_SOLAR_TYPE	"type"
#define FNAME_SOLAR_INFO	"info"

//pola tabeli REGULATOR
#define FID_REGULATOR_ID		0
#define FID_REGULATOR_TYPE		1
#define FID_REGULATOR_INFO		2
#define FNAME_REGULATOR_ID		"id"
#define FNAME_REGULATOR_TYPE	"type"
#define FNAME_REGULATOR_INFO	"info"

//pola tabeli AC_ADAPTER
#define FID_AC_ADAPTER_ID		0
#define FID_AC_ADAPTER_TYPE		1
#define FID_AC_ADAPTER_INFO		2
#define FNAME_AC_ADAPTER_ID		"id"
#define FNAME_AC_ADAPTER_TYPE	"type"
#define FNAME_AC_ADAPTER_INFO	"info"

//pola tabeli SYNCHRONIZATION
#define FID_SYNCHRONIZATION_ID		0
#define FID_SYNCHRONIZATION_TYPE	1
#define FID_SYNCHRONIZATION_INFO	2
#define FNAME_SYNCHRONIZATION_ID	"id"
#define FNAME_SYNCHRONIZATION_TYPE	"type"
#define FNAME_SYNCHRONIZATION_INFO	"info"

//pola tabeli TELEMETRY
#define FID_TELEMETRY_ID		0
#define FID_TELEMETRY_TYPE		1
#define FID_TELEMETRY_INFO		2
#define FNAME_TELEMETRY_ID		"id"
#define FNAME_TELEMETRY_TYPE	"type"
#define FNAME_TELEMETRY_INFO	"info"

//pola tabeli COLLECTION
#define FID_COLLECTION_ID		0
#define FID_COLLECTION_TYPE		1
#define FID_COLLECTION_INFO		2
#define FNAME_COLLECTION_ID		"id"
#define FNAME_COLLECTION_TYPE	"type"
#define FNAME_COLLECTION_INFO	"info"

//pola tabeli ANTENNA
#define FID_ANTENNA_ID		0
#define FID_ANTENNA_TYPE	1
#define FID_ANTENNA_INFO	2
#define FNAME_ANTENNA_ID	"id"
#define FNAME_ANTENNA_TYPE	"type"
#define FNAME_ANTENNA_INFO	"info"

//pola tabeli LIGHTNING
#define FID_LIGHTNING_ID		0
#define FID_LIGHTNING_TYPE		1
#define FID_LIGHTNING_INFO		2
#define FNAME_LIGHTNING_ID		"id"
#define FNAME_LIGHTNING_TYPE	"type"
#define FNAME_LIGHTNING_INFO	"info"

//pola tabeli WIND_GENERATOR
#define FID_WIND_GENERATOR_ID		0
#define FID_WIND_GENERATOR_TYPE		1
#define FID_WIND_GENERATOR_INFO		2
#define FNAME_WIND_GENERATOR_ID		"id"
#define FNAME_WIND_GENERATOR_TYPE	"type"
#define FNAME_WIND_GENERATOR_INFO	"info"

//pola tabeli NAUTOFON
#define FID_NAUTOFON_ID		0
#define FID_NAUTOFON_TYPE	1
#define FID_NAUTOFON_INFO	2
#define FNAME_NAUTOFON_ID	"id"
#define FNAME_NAUTOFON_TYPE	"type"
#define FNAME_NAUTOFON_INFO	"info"


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