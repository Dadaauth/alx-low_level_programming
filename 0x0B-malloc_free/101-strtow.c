#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * getWordsCount - gets the amount of words in a string
 * @str: the string to work on
 * Return: The amount of words
 */
int getWordsCount(char *str)
{
	int i, wordsCount = 0;

	if (str == NULL)
		return (wordsCount);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			wordsCount++;
	}
	return (wordsCount);
}
/**
 * free_malloc - frees malloc if there is an error
 * @temp: the memory to free
 * @a: the array subscript it is
 * Return: nothing
 */
void free_malloc(char **temp, int a)
{
	int i;

	for (i = 0; i <= a; i++)
	{
		free(temp[i]);
	}
	free(temp);
}
/**
 * strtow - converts a string to an array of words
 * @str: the string to convert
 * Return: NULL if string is (NULL or "") else a pointer to an array of words
 */
char **strtow(char *str)
{
	int i, j, a = 0, b = 0, charCount = 0, wordsCount;
	char **temp;

	wordsCount = getWordsCount(str);
	if (str == NULL || wordsCount == 0)
		return (NULL);

	temp = malloc((wordsCount + 1) * sizeof(char *));

	if (temp == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' '; j++)
				charCount++;
			temp[a] = malloc((charCount + 1) * sizeof(char));
			if (temp[a] == NULL)
			{
				free_malloc(temp, a);
				return (NULL);
			}
			for (j = i; str[j] != ' '; j++)
			{
				temp[a][b] = str[j];
				b++;
			}
			temp[a][b] = '\0';
			b = 0;
			a++;
			i = j;
		}
		if (str[i + 1] == '\0')
			temp[a] = NULL;
	}
	return (temp);
}
