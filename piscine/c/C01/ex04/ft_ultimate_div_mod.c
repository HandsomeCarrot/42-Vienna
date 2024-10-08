/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:07:43 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/14 22:28:24 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 10;
	b = 3;
	ptr_a = &a;
	ptr_b = &b;

	printf("%d, %d\n", a, b);
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("%d, %d", a, b);
	return (0);
}
*/
