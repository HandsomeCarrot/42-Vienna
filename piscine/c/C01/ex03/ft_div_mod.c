/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:49:55 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/14 22:06:20 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div_res;
	int	mod_res;
	int	*div;
	int	*mod;

	a = 10;
	b = 3;
	div = &div_res;
	mod = &mod_res;
	ft_div_mod(a, b, div, mod);
	printf("%d, %d", div_res, mod_res);
	return (0);
}
*/
