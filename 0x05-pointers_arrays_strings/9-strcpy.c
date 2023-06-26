#include "main.h"
/**
 * char *_strcpy - a function that copied the string pointed to by srs
 * @dest:copy to
 * @srs:copy from
 * Return:string
 */
char *_strcpy(char *dest, char *src)
{
int 1 = 0;
int x = 0;

while (*(srs + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = srs[x];
}
dest[l] = '\0';
return (dest);
}
