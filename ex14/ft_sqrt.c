int	ft_sqrt(int nb)
{
	int	sr;

	sr = 1;
	while((sr*sr) < nb)
		sr++;
	if((sr*sr) != nb)
		return (0);
	else
		return (sr);
}
/*
#include <stdio.h>
int	main()
{
	int r;

	r = ft_sqrt(16);

	printf("%d", r);
	return (0);
}
*/
