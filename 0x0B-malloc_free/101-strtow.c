#include "main.h"

/**
 * _substr - get sub string
 *@s: string
 *@start: start
 *@len: len
 *Return: sub string
 */
char *_substr(char *s, int start, int len)
{
	char *str;
	int size;
	int i;

	size = 0;
	while (s[size] != '\0')
		size++;
	if (start > size)
		return (NULL);
	if (size < len)
		len = size;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}

	str[len] = '\0';
	return (str);
}

/**
 * _strclen - string length
 *@str: string
 *@c: c
 *Return: string length
 */
int _strclen(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

/**
 * word_count - get words count
 *@s: string
 *@c: delimiter
 *Return: string length
 */
int word_count(char *s, char c)
{
	int index;
	int word;

	word = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index])
			word++;
		while (s[index] && s[index] != c)
			index++;
	}
	return (word);
}

/**
 * free_grid - free 2d array
 * @grid: 2d array
 * @height: height
 */
void free_grid(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

/**
 * strtow - split string to words
 * @str: string
 *Return: return 2d array
 */
char **strtow(char *str)
{
	char **array;
	int i;
	int words;
	int start;
	int length;

	if (!str || str[0] == '\0')
		return (NULL);
	words = word_count(str, ' ');
	i = 0;
	start = 0;
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (i < words)
	{
		while (str[start] == ' ' && str[start])
			start++;
		length = _strclen(str + start, ' ');
		array[i] = _substr(str, start, length);
		if (!array[i])
		{
			free_grid(array, i);
			return (NULL);
		}
		start += length;
		i++;
	}
	array[i] = NULL;
	return (array);
}
