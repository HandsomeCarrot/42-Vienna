/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_rows.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:26:59 by iursache          #+#    #+#             */
/*   Updated: 2024/07/24 21:27:46 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void write_row(int grid[4][4], int permutation[24][2][4], int row, int pos_row)
{
	int	count;

	count = 0;
	while (count < 4)
	{
		grid[row][count] = permutation[pos_row][0][count];
		count ++;
	}
}

int fill_rows(int grid[4][4], int **input, int row, int permutation[24][2][4])
{
	int	pos_row;

	pos_row = 0;
	if (valid_board(grid) == 1)
		return (1);
	while (pos_row < 24)
	{
		if (input[9 + row][0] == ('0' + permutation[pos_row][1][0])
			|| input [13 + row][0] == ('0' + permutation[pos_row][1][1]))
		{
			write_row(grid, permutation, row, pos_row);
			fill_rows(grid, input, row++, permutation);
		}
		pos_row++;
	}
}
