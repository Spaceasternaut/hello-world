#include <stdio.h>
char *ft_strcat(char *dest, char *src, int len);

int main() {
	char str[20] = "abc";
	printf("%s\n", ft_strcat(str, "def", 3));
	return 0;
}
