char	*ft_strcat(char *dest, char *src, int len)
{
	int i = 0;
	while (dest[i]) 
		i++;
	while (len--) {
		dest[i + len] = src[len];
	}
	dest[i] = '\0';
	return dest;
}
