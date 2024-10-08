/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:12:11 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/12 18:43:34 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	current;

	current = 'a';
	while (current <= 'z')
	{
		write(1, &current, 1);
		current++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/
