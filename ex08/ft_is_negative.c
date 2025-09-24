#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	letter;

	if (n < 0)
	{
		letter = 'N';
		ft_putchar(letter);
	}
	else
	{
		letter = 'P';
		ft_putchar(letter);
	}
}
/*
int 	main(void)
{
	ft_is_negative(2);
	return (0);
}*/