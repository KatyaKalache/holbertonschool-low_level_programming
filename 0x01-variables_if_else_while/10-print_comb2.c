#include <stdio.h>

int main(void)
{
  int i;
  int j;

  for (i = 0; i <= 9; i++)
    {
      for (j = 0; j <= 9; j++)
	{
	  putchar(i + '0');
	  putchar(j + '0');

      if (i == 9 && j == 9)
	{break;}

      putchar(',');
      putchar(' ');

}
    }
  putchar('\n');
  return (0);
}
