#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	str[26] = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (!((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z')))
					continue ;
			else
			{
				while (str[j] != '\0')
				{
					if (argv[1][i] == str[j] || argv[1][i] == (str[j] - 32))
					{
						argv[1][i] = str[25 - j];
						break ;
					}
					j++;
				}
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
