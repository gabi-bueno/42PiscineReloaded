int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb-1);
	}
	return(nb);
}
/*
#include <stdio.h>

int main() {
    int nb = 0;

    int factorial = ft_recursive_factorial(nb);
    printf("O fatorial de %d = %d", nb, factorial);
    return 0;
}
*/
