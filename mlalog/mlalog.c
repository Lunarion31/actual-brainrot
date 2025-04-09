#include <stdio.h>
#include "mlalog.h"

void mlog_error(const char *msg, const char *file, int line, const char *date) {
    fprintf(stderr, "\"%s\". *%s*, line %d, compiled on %s.\n", msg, file, line, date);
}
