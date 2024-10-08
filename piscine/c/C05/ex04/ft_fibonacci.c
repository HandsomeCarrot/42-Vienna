/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:57:49 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/26 23:08:28 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d", ft_fibonacci(atoi(av[1])));
	}
} */