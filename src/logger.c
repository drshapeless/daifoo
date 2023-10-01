#include "logger.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* TODO: This function should be able to write to file in batch in the future. */
void log_output(LogLevel level, const char *message, ...) {
    const char *level_strings[6] = { "FATAL: ", "ERROR: ", "WARN:  ",
                                     "INFO:  ", "DEBUG: ", "TRACE: " };
    b8 is_error = level < LOG_LEVEL_WARN;

    /* TODO: This imposes a limit of 32000 to the message size, which
       should not be a problem, but could be improve in the future. */
    char out_message[32000];
    memset(out_message, 0, 32000);

    va_list arg_ptr;
    va_start(arg_ptr, message);
    vsnprintf(out_message, 32000, message, arg_ptr);
    va_end(arg_ptr);

    char out_message2[32000];
    memset(out_message2, 0, 32000);
    snprintf(out_message2, 32000, "%s%s\n", level_strings[level], out_message);
    /* sprintf(out_message, "%s%s\n", level_strings[level], out_message); */

    if (is_error) {
        fprintf(stderr, "%s", out_message2);
    } else {
        printf("%s", out_message2);
    }
}
