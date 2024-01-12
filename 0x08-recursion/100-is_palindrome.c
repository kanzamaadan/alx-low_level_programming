#include "main.h"

/**
 * check_palindrome -checks if string is a palindrome recursively.
 * @str: string to be checked.
 * @start: starting index for comparison.
 * @end: ending index for comparison.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int check_palindrome(char *str, int start, int end)
{/* If start crosses or meets end, the string is a palindrome*/
if (start >= end)
return (1);/*then it returns 1*/

if (str[start] != str[end])
return (0);/* but if they characters in the start of string*/
/* and the chars in the end of the string */
/* are not equal, then return 0*/

/* Check the next pair of characters */
return ((check_palindrome(str, start + 1, end - 1)));
}

/**
 * _strlen - Calculates length of a string.
 * @sl: string to be calculated
 *
 * Return: The length of the string.
 */
int _strlen(char *sl)
{
int length = 0;
while (*sl != '\0')
{
length++;
sl++;
}
return (length);
}

/**
 * is_palindrome - fuction ses if string is a palindrome.
 * @s: string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
/* first we sould get the length of the string*/
/* to reach to the last character*/
int len = _strlen(s);

if (len <= 1)
{
return (1);/* if it's 1 char or less (emplty),*/
/*then string is a palindrome*/
}
/* if not check if a string is a palindrome*/
/* len -1 will star from the end of the string but without '\0'*/
return (check_palindrome(s, 0, len - 1));
}
