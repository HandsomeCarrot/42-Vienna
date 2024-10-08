/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:45:22 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/11 12:14:05 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	current;

	current = 48;
	while (current <= 57)
	{
		write(1, &current, 1);
		current = current + 1;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
