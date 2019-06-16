char *ft_loop(int i, char *m , long int total, int k)
{
	while (i > total)
		i = i / 10;
	while (i > 0)
	{
		m[k] = (total / i) + 48;
		total = total - ((total / i) * i);
		i = i / 10;
		k++;
	}
	return (m);
}
