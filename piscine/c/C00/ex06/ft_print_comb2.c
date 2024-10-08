/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:32:50 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/11 22:28:07 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_character(char c)
{
	write(1, &c, 1);
}

void	write_characters(int first, int second)
{
	write_character('0' + first / 10);
	write_character('0' + first % 10);
	write_character(' ');
	write_character('0' + second / 10);
	write_character('0' + second % 10);
	write_character(',');
	write_character(' ');
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			write_characters(first, second);
			second++;
		}
		first++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
