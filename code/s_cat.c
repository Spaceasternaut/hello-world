char	*ft_strcat(char *dest, char *src, int len)
{
	int i = 0;
	while (dest[i]) 
		i++;
	dest[i + len] = 0;
	while (len--) {
		dest[i + len] = src[len];
	}
	return dest;
}
