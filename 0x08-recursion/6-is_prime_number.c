#include "main.h"

/**
 * check_prime_number - function to check for prime number
 * @n: number to check
 * @i: devise number
 *
 * Return: returns the prime number
*/
int check_prime_number(int n, int i)
{
/* i keeps track of the current divisor*/
/* if the i is equal to n it means we have */
/*checked divisibility for all possible divisors up to */
/*the number itself.If i reaches n,*/
/*the function returns 1, indicating that the number is prime.  */
if (i == n)
{
return (1);
}
else if (n % i == 0)
{
/*If n is divisible by the current value of i,*/
/*it means n is not a prime number.*/
return (0);/*returns o*/
}
/*If the above conditions are not met,*/
/*the function makes a recursive call to*/
/*check_prime with an incremented value of i*/
/* to check divisibility with the next divisor.*/
return (check_prime_number(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 *
 * @n: number to check.
 * Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
/* if the n = 1 or less than 1 (1, 0, -1..)*/
if (n <= 1)
{
return (0);/*then it return o, without any other checks */
}
/* but if not, then we should chech for the prime n*/
/* return whatever the helper function return*/
/* we star from 2 of course, 1 returns 0 */
return (check_prime_number(n, 2));
}
