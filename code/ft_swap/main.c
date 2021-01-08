#include <stdio.h>

void ft_swap(int *a, int *b);

int main() 
{
	int first = 6;
	int second = 3;
	ft_swap(&first, &second);	
	printf("%d %d\n", first, second);
	return 0;
}
