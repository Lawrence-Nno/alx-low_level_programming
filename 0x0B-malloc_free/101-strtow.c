#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * wc - This func counts words and the letters it contains
 * @str: The string to count
 * @pos: The position of the word
 * @fc: the position of the first letter of the word
 * Return: returns the wordcount.
 */

int wc(char *str, int pos, char fc)
{
	int i, wc, charc, flag;

	str[0] != ' ' ? (wc = 1) : (wc = 0);
	for (i = 0, flag = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && flag == 0)
		{
			wc++;
			flag = 1;
		}
		if (pos > 0 && pos == wc)
		{
			if (pos > 0 && pos == wc && fc > 0)
				return (i);
			for (charc = 0; str[i + charc + 1] != ' '; charc++)
				;
			return (charc);
		}
		if (str[i] == ' ')
			flag = 0;
	}
	return (wc);
}

/**
 * strtow - This func splits strings into words
 * @str: The string to split
 * Return: Returns a double pointer
 */

char **strtow(char *str)
{
	int wordc, wordlen, getfc, len, i, j;
	char **ptr;

	for (len = 0; str[len]; len++)
		;
	if (str == NULL)
		return (NULL);
	wordc = wc(str, 0, 0);
	if (len == 0 || wordc == 0)
		return (NULL);
	ptr = malloc((wordc + 1) * sizeof(void *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, wordlen = 0; i < wordc; i++)
	{
		wordlen = wc(str, i + 1, 0);
		if (i == 0 && str[i] != ' ')
			wordlen++;
		ptr[i] = malloc(wordlen * sizeof(char) + 1);
		if (ptr[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		getfc = wc(str, i + 1, 1);
		if (str[0] != ' ' && i > 0)
			getfc++;
		else if (str[0] == ' ')
			getfc++;
		for (j = 0; j < wordlen; j++)
			ptr[i][j] = str[getfc + j];
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}
