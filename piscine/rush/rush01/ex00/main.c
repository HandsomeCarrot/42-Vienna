/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:44:07 by iursache          #+#    #+#             */
/*   Updated: 2024/07/24 21:27:47 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fill_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (col < 4)
	{
		while (row < 4)
		{
			grid[col][row] = 0;
			row++;		
		}
		col++;
		row = 0;
	}
}

int	main(void)
{
	int	grid[4][4];

	fill_grid(grid);
	print(grid);
}
