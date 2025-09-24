void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	n1 = 17;
	int	n2 = 2;
	int	rdiv;
	int	rmod;

	ft_div_mod(n1, n2, &rdiv, &rmod);
	
	printf (" %d dividido por %d é igual a %d e resta %d", n1, n2, rdiv,rmod);
	
	return (9);
}*/ 
