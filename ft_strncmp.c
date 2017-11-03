 #include <string.h>

 int	ft_strncmp(const char *s1, const char *s2, size_t n)
 {
 	int i;
	int j;

	i = 0;
	j = 0;
	while ((s1[i] != 0 && i < n) || (s2[i] != 0 && i < n))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
 }
