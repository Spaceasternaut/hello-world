void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void 	ft_sort(int *n, int len) 
{
	int i;
	int j = 0;
	while (j < len) {
		i = j+1;
	while (i < len)
       	{
		if (n[j] > n[i]) 
			ft_swap(n + j, n + i);
		i++;
	}
	j++;
	}

	
}
