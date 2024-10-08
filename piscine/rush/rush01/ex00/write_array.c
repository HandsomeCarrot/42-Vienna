/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:54:27 by iursache          #+#    #+#             */
/*   Updated: 2024/07/24 21:27:42 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	print(int grid[4][4])
{
	char	c;
	int		pos1;
	int		pos2;

	pos2 = 0;
	while (pos2 < 4)
	{
		pos1 = 0;
		while (pos1 < 4)
		{
			c = '0' + grid[pos2][pos1];
			write(1, &c, 1);
			pos1++;
		}
		pos2++;
		c = '\n';
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	int nbr_grid[4][4] = {{1, 2, 3, 4}, 
	{2, 0, 0, 3}, {3, 0, 0, 2}, {4, 3, 2, 1}};

	print(nbr_grid);
}*/