#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
void printElf_abi(unsigned char *e_ident);
void printElf_osabi(unsigned char *e_ident);
void printElf_type(unsigned int e_type, unsigned char *e_ident);
void printElf_entry(unsigned long int e_entry, unsigned char *e_ident);
void closeElf(int elf);
void checkElf(unsigned char *e_ident);
void printElf_magic(unsigned char *e_ident);
void printElf_class(unsigned char *e_ident);
void printElf_data(unsigned char *e_ident);
void printElf_version(unsigned char *e_ident);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */
