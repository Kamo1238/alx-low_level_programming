#include <stdio.h>

/**
 * main - printf thr alphabet
 *
 * Return Always 0 (success)
 */
int main(void)
{char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{punchar(alp[i]);}
putchar('\n');
return (0);
}
