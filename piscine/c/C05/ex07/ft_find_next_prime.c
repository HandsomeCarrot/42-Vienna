/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:58:57 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/29 14:44:44 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	cur_divisor;
	int	cur_num;
	int	prime_num;

	cur_num = nb;
	if (nb <= 2)
		return (2);
	prime_num = nb - 1;
	while (prime_num < nb)
	{
		cur_divisor = 2;
		while (cur_divisor <= cur_num / 2)
		{
			if (cur_num % cur_divisor == 0)
				break ;
			cur_divisor++;
		}
		if (cur_divisor > cur_num / 2)
			prime_num = cur_num;
		cur_num++;
	}
	return (prime_num);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int pos = 1;
	while (pos > 0 && ac > 1)
	{
		printf("%d\n", ft_find_next_prime(atoi(av[pos])));
		pos--;
	}
} */