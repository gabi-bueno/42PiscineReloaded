/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabde-so <gabde-so@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 11:00:17 by gabde-so          #+#    #+#             */
/*   Updated: 2025/09/26 11:00:29 by gabde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
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
