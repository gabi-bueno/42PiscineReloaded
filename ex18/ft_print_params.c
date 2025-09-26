/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabde-so <gabde-so@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:24:26 by gabde-so          #+#    #+#             */
/*   Updated: 2025/09/26 11:11:44 by gabde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = 1;
	if (argc >= 1)
	{
		while (argc > c)
		{
			i = 0;
			while (argv[c][i] != '\0')
			{
				ft_putchar (argv[c][i]);
				i++;
			}
			ft_putchar (10);
			c++;
		}
	}
	return (0);
}
