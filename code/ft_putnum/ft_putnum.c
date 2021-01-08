#include <unistd.h>

void 	ft_putnum(int n) {
	int m;
	long num = n;
	char sym[11];
	int i = 0;
	int j = 11;
	if  (n == 0) 
	{
		write(1, "0", 1);
		return;
	}
	if (n < 0) 
	{
		write(1, "-", 1);
		num = -num;
	}

	while (num != 0) 
	{
		m = num %10;
		sym[i++] = m +  '0';
		num /= 10;
	}
	while (j >= 0) 
	{
		write(1,sym + j, 1); 
		j--;
	}
}
