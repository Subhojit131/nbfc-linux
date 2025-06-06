#define _XOPEN_SOURCE 500 // unistd.h: pwrite()/pread(), string.h: strdup()
#define _DEFAULT_SOURCE   // endian.h: htole16(), le16toh()

#define NX_JSON_CALLOC(SIZE) ((nx_json*) Mem_Calloc(1, SIZE))
#define NX_JSON_FREE(JSON)   (Mem_Free((void*) (JSON)))

#include "config.h"
#include "ec.c"

#if ENABLE_EC_DEBUG
#include "ec_debug.c"
#endif

#if ENABLE_EC_DUMMY
#include "ec_dummy.c"
#endif

#if ENABLE_EC_DEV_PORT
#include "ec_linux.c"
#endif

#if ENABLE_EC_SYS || ENABLE_EC_ACPI
#include "ec_sys_linux.c"
#endif

#include "error.c"
#include "fan.c"
#include "fan_temperature_control.c"
#include "fs_sensors.c"
#include "memory.c"
#include "model_config.c"
#include "nxjson.c"
#include "program_name.c"
#include "protocol.c"
#include "pidfile.c"
#include "reverse_nxjson.c"
#include "service.c"
#include "service_config.c"
#include "server.c"
#include "temperature_filter.c"
#include "temperature_threshold_manager.c"
#include "quit.c"

#include "main.c"
