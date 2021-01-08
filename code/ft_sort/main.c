#include <stdio.h>


void ft_sort(int *n, int len);


int main() {
	int ar[] = {6,5,2,1,7};
	ft_sort(ar, 5);
	int e = 0;
	while (e < 5) {
		printf("%d ", ar[e]);
		e++;
	}
	return 0;
}
