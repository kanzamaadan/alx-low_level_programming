#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int count = 0, i = 0;

while (str[i])
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
i++;
}

return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
char **words;
int i = 0, j, k, len, word_len, word_count;

if (str == NULL || str[0] == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (j = 0; j < word_count; j++)
{
while (str[i] == ' ')
i++;

len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
len++;

words[j] = malloc((len + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL);
}

for (word_len = 0; word_len < len; word_len++)
words[j][word_len] = str[i++];
words[j][word_len] = '\0';
}

words[j] = NULL;
return (words);
}
