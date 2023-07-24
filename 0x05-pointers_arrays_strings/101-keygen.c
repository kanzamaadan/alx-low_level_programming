#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0.
 */
int main(void)
{
char password[84];
int index = 0, sum = 0, target_sum = 2772;

srand(time(0));
while (sum < target_sum)
{
password[index] = 33 + rand() % 94;
sum += password[index];
index++;
}

password[index] = '\0';

if (sum != target_sum)
{
int diff = sum - target_sum;
int i = 0;

while (diff > 0)
{
if (password[i] >= 34 && password[i] <= 126)
{
password[i]--;
diff--;
}

i++;
if (password[i] == '\0')
i = 0;
}
}

printf("%s\n", password);
return (0);
}
