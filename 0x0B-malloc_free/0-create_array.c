#include "main.h"

/**
* create_array - creates an array of chars
* Return NULL if size is 0
* Allocate memory for the array
* Return NULL if memory allocation fails
* Initialize each element of the array with the specified character
* Return a pointer to the created array
* initializes it with a specific char.
* @size: Size of the array
* @c: Character to insert
*/

char *create_array(unsigned int size, char c)
{
char *ara;
unsigned int i;

if (size == 0)
return (NULL);

ara = malloc(sizeof(char) * size);

if (ara == NULL)
return (NULL);

for (i = 0; i < size; i++)
ara[i] = c;

return (ara); 
}
