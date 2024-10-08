/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:01:55 by vpoka             #+#    #+#             */
/*   Updated: 2024/08/01 09:56:01 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	pos_arg;
	int	pos;

	pos_arg = 1;
	pos = 0;
	if (ac > 1)
	{
		while (pos_arg < ac)
		{
			while (av[pos_arg][pos] != '\0')
				write(1, &av[pos_arg][pos++], sizeof(char));
			write(1, "\n", sizeof(char));
			pos = 0;
			pos_arg++;
		}
	}
	return (0);
}
