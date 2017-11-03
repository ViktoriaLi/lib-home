int		ft_atoi(const char *nptr)
{
	int				i;
	int				sign;
	long long int	res;
	const char		*d;

	i = 0;
	sign = 1;
	res = 0; 
	d = nptr;
	while (d[i] == ' ' || d[i] == '\n' || d[i] == '\t' || d[i] =='\v' || d[i] == '\f' || d[i] == '\r')
			i++;
	if (d[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (d[i] == '+')
		i++;
	while (d[i] >= '0' && d[i] <= '9')
	{
		res = res * 10 + sign * (d[i] - '0');
		i++;
	}
	if (res < -2147483648)
		return (-2147483648);
	else if (res > 2147483647)
		return (2147483647);
	else
		return (res);
}
