#include <stdio.h>

int	main(void)
{
	int	i[3];
	int	*ptr;
	ptr = &i;
	i[0] = 5;
	i[1] = 24;
	printf("%x, %x\n", ptr, ptr + 1);
	printf("%d, %d", *ptr, *(ptr + 1));
}
