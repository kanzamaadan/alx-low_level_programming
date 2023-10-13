#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
unsigned int y, z;
size_t len, add;
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
char p[7] = "      ";

if (argc != 2)
{
printf("Correct usage: ./keygen5 username\n");
return (1);
}
len = strlen(argv[1]);
p[0] = l[(len ^ 59) & 63];
for (y = 0, add = 0; y < len; y++)
add += argv[1][y];
p[1] = l[(add ^ 79) & 63];
for (y = 0, z = 1; y < len; y++)
z *= argv[1][y];
p[2] = l[(z ^ 85) & 63];
for (z = argv[1][0], y = 0; y < len; y++)
if ((char)z <= argv[1][y])
z = argv[1][y];
srand(z ^ 14);
p[3] = l[rand() & 63];
for (z = 0, y = 0; y < len; y++)
z += argv[1][y] * argv[1][y];
p[4] = l[(z ^ 239) & 63];
for (z = 0, y = 0; (char)y < argv[1][0]; y++)
z = rand();
p[5] = l[(z ^ 229) & 63];
printf("%s\n", p);
return (0);
}
