#ifndef MAIN_H
#define MAIN_H

/**
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x14-file_io directory.
 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif