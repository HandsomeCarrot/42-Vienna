/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:09:55 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/11 13:15:29 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	current;

	current = 'z';
	while (current >= 'a')
	{
		write(1, &current, 1);
		current = current - 1;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
