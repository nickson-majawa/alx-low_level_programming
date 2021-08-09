#ifndef MAIN_FH
#define MAIN_FH
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename,size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_tofile(const char *filename, char *text_content);

#endif /* MAIN_FH */