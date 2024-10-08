/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:32:23 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/24 21:27:54 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int grid[4][4])
{
	int		pos1;
	int		pos2;
	char	c;

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
