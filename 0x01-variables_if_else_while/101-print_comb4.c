#include <stdio.h>

/**
 * main - prints all possible different combination of three digits
 * Return:Always 0 (success)
 */
int main(void)
{int n,m, l;
for ( n=48;m<58;n++)
{for (m=49;m<58;m++)
{for (l = 50;1<58; l++ ) 
{if (1>m && m>n)
{putchar(n);
putchar(m);
putchar(l);
if (n !=55 || m !=56)
{putchar(',');
putchar(' ');}
}
}
}
}
putchar('\n');
return(0);
}
