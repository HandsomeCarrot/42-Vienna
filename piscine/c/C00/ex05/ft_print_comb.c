/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:39:15 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/11 21:30:08 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_characters(char hun, char ten, char one)
{
	char	end;

	write(1, &hun, 1);
	write(1, &ten, 1);
	write(1, &one, 1);
	if (hun < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hun;
	char	ten;
	char	one;

	hun = '0';
	while (hun <= '9')
	{
		ten = hun + 1;
		while (ten <= '9')
		{
			one = ten + 1;
			while (one <= '9')
			{
				write_characters(hun, ten, one);
				one++;
			}
			ten++;
		}
		hun++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
