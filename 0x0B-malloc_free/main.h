#include <stddef.h>
char *create_array(unsigned int size, char c);
#include <stdlib.h>
unsigned int _strlen(char *s);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
