#ifndef __LOG_H__
#define __LOG_H__

#include <libretro.h>
#include "Types.h"

#define LOG_ERROR   RETRO_LOG_ERROR
#define LOG_MINIMAL	RETRO_LOG_WARN
#define LOG_WARNING RETRO_LOG_WARN
#define LOG_VERBOSE RETRO_LOG_INFO
#define LOG_APIFUNC RETRO_LOG_DEBUG

extern "C" {
	extern retro_log_printf_t log_cb;
}

#define LOG(...) if (log_cb) log_cb( __VA_ARGS__ )

#endif
