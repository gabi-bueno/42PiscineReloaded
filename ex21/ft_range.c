/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabde-so <gabde-so@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:33:53 by gabde-so          #+#    #+#             */
/*   Updated: 2025/09/26 11:18:01 by gabde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*srcn;
	int	i;
	int	size;

	if (min > max)
		return (NULL);
	size = max - min;
	srcn = (int *) malloc (sizeof(int) * (size + 2));
	i = 0;
	while (max >= min)
	{
		srcn[i] = min;
		min++;
		i++;
	}
	srcn[i] = '\0';
	return (srcn);
}
/*
#include <stdio.h>
//fazer condicao de se malloc nao der certo retornar nullo
int main() {
    int i = 0;
    int *num = ft_range(9, 10);

    if(num == NULL)
    {
    	printf("Numero minimo maior que o maximo");
	return 0;
    }
    while (num[i])
    {
        printf("%d, ", num[i]);
        i++;
    }
    free(num);
    return 0;
}
*/
