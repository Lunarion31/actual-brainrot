#ifndef MLALOG_H
#define MLALOG_H

void mlog_error(const char *msg, const char *file, int line, const char *date);

#define MLA_ERROR(msg) mlog_error(msg, __FILE__, __LINE__, __DATE__)

#endif 
