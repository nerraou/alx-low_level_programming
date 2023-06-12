#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>

#define S_RW_RW_R S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
