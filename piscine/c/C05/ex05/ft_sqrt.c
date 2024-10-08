/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:55:30 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/29 14:36:47 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	sqr;

	sqr = 1;
	while ((sqr * sqr) < nb)
		sqr++;
	if ((sqr * sqr) == nb)
		return (sqr);
	return (0);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_sqrt(atoi(av[1])));
	}
} */