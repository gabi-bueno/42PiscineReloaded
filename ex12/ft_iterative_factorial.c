/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabde-so <gabde-so@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 11:03:17 by gabde-so          #+#    #+#             */
/*   Updated: 2025/09/26 11:04:42 by gabde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb - 1;
	factorial = nb;
	while (i >= 1)
	{
		factorial = factorial * i;
		i--;
	}
	return (factorial);
}
/*
#include <stdio.h>

int main() {
    int nb = 70;

    int factorial = ft_iterative_factorial(nb);
    printf("O fatorial de %d = %d", nb, factorial);
    return 0;
}
*/
