/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 12:17:24 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/11 13:02:01 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative_char;
	char	positive_char;

	negative_char = 'N';
	positive_char = 'P';
	if (n < 0)
	{
		write(1, &negative_char, 1);
	}
	else
	{
		write(1, &positive_char, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(5);
	return (0);
}
*/
