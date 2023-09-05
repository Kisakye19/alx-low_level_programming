#include "main.h"
/**
* alloc_grid - returns a pointer to a
*two dimensional array of integers.
*@width: width oàf array
*@height: height of array
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **ara;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	ara = (int **) malloc(sizeof(int *) * height);
	if (ara != NULL)
	{
		for (; i < height; i++)
		{
			ara[i] = (int *) malloc(sizeof(int) * width);
			if (ara[i] != NULL)
			{
				for (j = 0; j < width; j++)
					ara[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(ara[i]);
					i--;
				}
				free(ara);
				return (NULL);
			}
		}
		return (ara);
	}
	else
	{
		return (NULL);
	}
}
