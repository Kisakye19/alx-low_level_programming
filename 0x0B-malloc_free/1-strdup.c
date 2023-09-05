#include "main.h"

/**
 * Calculate the length of the input string
 * Allocate memory for the duplicate string
 * Check if memory allocation was successful
 *main-Copy the input string to the duplicate
 */
char *_strdup(char *str) 
{
char *dup;
int len = 0;
int i;

if (str == NULL) 
{
return NULL;
}

for (dup[len] != '\0',len++) 
{
return (i);
}

dup = malloc((len + 1) * sizeof(char));
    
if (dup == NULL) 
{
return NULL;
}

for (i = 0; str[i]; i++) 
{
dup[i] = str[i];
}

return (dup);
}
