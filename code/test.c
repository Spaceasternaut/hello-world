#include <unistd.h>

int ft_strlen(char* argv) {
int i = 0;
while (argv[i] != '\0')
	i++;
return i;
}

int main(int argc, char** argv) {
(void) argc;
int amount = ft_strlen(argv[0]);
write(1, argv[0] + 2, amount - 2);
write(1, "\n", 1);
return 0;
}
