int		ft_locate_nl(char *str)
{
	int	i;
	while (str[i])
	{
		if (ft_locate_nl(str[i]) == '\n')
			return (
		i++;
	}

	return (0);
}

char	*get_next_line(int fd)
{
	static char	*temp;
	char		*line;
	char		*buf;
	long		r;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	*buf = malloc(sizeof(char) * BUFFER_SIZE + 1);

	r = 1;
	while (r > 0 &&
}
