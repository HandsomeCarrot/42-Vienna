/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:42:30 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/29 14:27:06 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d", ft_recursive_power((atoi(av[1])), (atoi(av[2]))));
	}
} */