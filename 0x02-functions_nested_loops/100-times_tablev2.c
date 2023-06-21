#include "main.h"

void print_times_table(int n)
{
	int a, b, calc;
	int nb = n;
	
	if (nb >= 0 && nb < 9)
	{
		for (a = 0; a < 10; a++)
		{
			for (b = 0; b < 10; b++)
			{
			calc = a * b;
			if (b == nb)
			{
				continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + calc);
				_putchar(',');
				_putchar(' ');
			}
			}
		}
	}

        if (nb >= 10 && nb < 100)
        {
                for (a = 0; a < 100; a++)
                {
                for (b = 0; b < 100; b++)
                {
                         calc = a * b;
                        if((calc > 9) && (calc < 100))
                        {
                _putchar('0' + (calc / 10));
                _putchar('0' + (calc % 10)); 
                 if (b == n)
                                {
                                        continue;
                                        _putchar(',');
                                        _putchar(' ');
                                }     
                        }
                else if ((calc >= 100) && (calc <= 144))
                        {
                                _putchar('0' + (calc / 100));
                                _putchar('0' + (calc / 10) % 10);
                                _putchar('0' + (calc % 10));
                                if (b == n)
                                {
                                        continue;
                                        _putchar(',');
                                        _putchar(' ');
                                }
                        }
                }
                 _putchar('\n');
                }
        }       
     _putchar('\n');            
}
