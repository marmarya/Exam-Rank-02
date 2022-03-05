#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	str[26] = "abcdefghijklmnopqrstuvwxyz";
	
	i = 0;
	j = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] = 110 + i;
		   	else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] = 97 +  i;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] = 78 + i;
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] = 90 - i;
			write(1, &argv[1][i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
	return(0);
}


