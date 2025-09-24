void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	n;

	ft_ft(&n);
	printf ("conteudo apontado por nbr = %d \n", n);
	return (0);
}
