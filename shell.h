#include <stdio.h>
#include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include <sys/types.h>
// #include <sys/wait.h>
// #include <sys/stat.h>
// #include <limits.h>
// #include <fcntl.h>
// #include <errno.h>

/* for read/write buffers */
#define READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

// /* for command chaining */
// #define CMD_NORM 0
// #define CMD_OR 1
// #define CMD_AND 2
// #define CMD_CHAIN 3

// /* for convert_number() */
// #define CONVERT_LOWERCASE 1
// #define CONVERT_UNSIGNED 2

// /* 1 if using system getline() */
// #define USE_GETLINE 0
// #define USE_STRTOK O

// #define HIST_FILE ".simple_shell_history"
// #define HIST_MAX 4096

// -------------------------------------

/* string_functions.c */
int _strlen (char *);
int _strcmp (char *, char *);
char *starts_with (const char *, const char *);
char *_strcat (char *, char *);

/* string_functions2.c */
char *_strcpy(char *, char *);
char *_strdup(const char *);
void _puts(char *);
int _putchar(char);

/* string_functions3.c */
char *_strncpy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_strchr(char *, char);

/* string_functions4.c */
char **strtow(char *, char *);
char **strtow2(char *, char);

// -------------------------------------

/* memory_functions */
char *_memset(char *, char, unsigned int);
void ffree(char **);
void *_realloc(void *, unsigned int, unsigned int);

/* memory_functions2.c */
int bfree (void **);