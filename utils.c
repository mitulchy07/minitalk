
#include "minitalk.h"

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
		{
			n = n * 10 + str[i] - 48;
			i++;
		}
		else
		{
			write(1, "Le PID est incorrect\n", 21);
			exit(0);
		}
	}
	return (n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	nb;

	nb = n;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}
