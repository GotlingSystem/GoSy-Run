#include "pebble.h"

#define STRETCH_TIME_PKEY 10
#define PREPARE_TIME_PKEY 11

#define STRETCH_TIME_DEFAULT 20
#define PREPARE_TIME_DEFAULT 3

int stretch_stretch_time = STRETCH_TIME_DEFAULT;
int stretch_prepare_time = PREPARE_TIME_DEFAULT;

void stretch_read_persistent() {
	stretch_stretch_time = persist_exists(STRETCH_TIME_PKEY) ? persist_read_int(STRETCH_TIME_PKEY) : STRETCH_TIME_DEFAULT;
	stretch_prepare_time = persist_exists(PREPARE_TIME_PKEY) ? persist_read_int(PREPARE_TIME_PKEY) : PREPARE_TIME_DEFAULT;
}

void stretch_write_persistent() {
	persist_write_int(STRETCH_TIME_PKEY, stretch_stretch_time);
	persist_write_int(PREPARE_TIME_PKEY, stretch_prepare_time);
}