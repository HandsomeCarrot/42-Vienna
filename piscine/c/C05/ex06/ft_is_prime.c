/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:36:04 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/28 22:20:46 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	current_divisor;

	current_divisor = 2;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (current_divisor <= nb / 2)
	{
		if (nb % current_divisor == 0)
			return (0);
		current_divisor++;
	}
	return (1);
}

/* #include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int pos = 1;
	while (pos < ac)
	{
		printf("%d\n", ft_is_prime(atoi(av[pos])));
		pos++;
	}
} */
