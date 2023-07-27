#include "main.h"
#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum, i, j;
char *n1_ptr = n1, *n2_ptr = n2, *r_ptr = r;

while (*n1_ptr++)
len1++;
while (*n2_ptr++)
len2++;

if (len1 + 1 > size_r || len2 + 1 > size_r)
return NULL;

n1_ptr--, n2_ptr--;

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
{
sum = carry + (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0);
carry = sum / 10;
*r_ptr++ = sum % 10 + '0';
}

if (r_ptr > r + size_r - 1)
return NULL;

*r_ptr = '\0';

for (i = 0, j = r_ptr - 1 - r; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}

return r;
}
