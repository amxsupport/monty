/*
 * File: tokenize_string.c
 */

#include <stdlib.h>

char **strtow(char *str, char *delims);
int is_delim(char ch, char *delims);
int get_word_length(char *str, char *delims);
int get_word_count(char *str, char *delims);
char *get_next_word(char *str, char *delims);

/**
 * strtow - takes a string and seperates its words
 *
 * @str: string to seperate into words
 * @delims: delimitors to use to delimit words
 *
 * Return: 2D array of pointers to each word
 */

char **strtow(char *str, char *delims)
{
	char **words = NULL;
	int wc, wordLen, n, i = 0;

	if (str == NULL || !*str)
		return (NULL);
	wc = get_word_count(str, delims);


	if (wc == 0)
		return (NULL);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (i < wc)
	{
		wordLen = get_word_length(str, delims);
		if (is_delim(*str, delims))
		{
			str = get_next_word(str, delims);
		}
		words[i] = malloc((wordLen + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		n = 0;
		while (n < wordLen)
		{
			words[i][n] = *(str + n);
			n++;
		}
		words[i][n] = '\0'; /* set end of str */
		str = get_next_word(str, delims);
		i++;
	}
	words[i] = NULL; /* last element is null for iteration */
	return (words);
}

/**
 * is_delim - checks if stream has delimitor char
 *
 * @ch: character in stream
 *
 * @delims: Pointer to null terminated array of delimitors
 *
 * Return: 1 (success) 0 (failure)
 */

int is_delim(char ch, char *delims)
{
	/* implementation */
}

/**
 * get_word_length - gets the word length of cur word in str
 *
 * @str: string to get word length from current word
 * @delims: delimitors to use to delimit words
 *
 * Return: word length of current word
 */

int get_word_length(char *str, char *delims)
{
	/* implementation */
}

/**
 * get_word_count - gets the word count of a string
 *
 * @str: string to get word count from
 * @delims: delimitors to use to delimit words
 *
 * Return: the word count of the string
 */

int get_word_count(char *str, char *delims)
{
	/* implementation */
}

/**
 * get_next_word - gets the next word in a string
 *
 * @str: string to get next word from
 * @delims: delimitors to use to delimit words
 *
 * Return: pointer to first char of next word
 */

char *get_next_word(char *str, char *delims)
{
	 /* implementation */
}
