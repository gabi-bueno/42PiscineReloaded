/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabde-so <gabde-so@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 11:08:42 by gabde-so          #+#    #+#             */
/*   Updated: 2025/09/26 11:09:01 by gabde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar (str[i]);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr("Oi");
	return (0);
}*/
