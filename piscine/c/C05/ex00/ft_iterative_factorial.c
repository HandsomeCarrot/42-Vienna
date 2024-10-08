/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:12:51 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/28 20:12:51 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	res = nb;
	while (nb > 1)
		res *= --nb;
	return (res);
}

/* #include <stdio.h>

int	main(void)
{
	int nb = 4;

	printf("%d", ft_iterative_factorial(nb));
} */