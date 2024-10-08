/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:30:11 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/26 12:41:01 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 1)
		res *= nb;
	return (res);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d", ft_iterative_power((atoi(av[1])), (atoi(av[2]))));
	}
} */