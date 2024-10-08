/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_grid_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:54:55 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/24 21:27:54 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	love(int grid[4][4], char **input)
{
	int	pos;

	pos = 1;
	while (pos < 17)
	{
		if (input[pos][0] == '4')
		{
			write4(grid, input, pos);
		}
		else if (input[pos][0] == 1)
		{
			write1(grid, input, pos);
		}
		pos++;
	}
}

void	peace(int grid[4][4], int start_pos, int nbr, int nbr_opposite)
{
	if (start_pos < 200)
	{
		col_up(grid, start_pos - 100, nbr, nbr_opposite);
	}
	else if (start_pos >= 200 && start_pos < 300)
	{
		col_down(grid, start_pos - 200, nbr, nbr_opposite);
	}
	else if (start_pos >= 300 && start_pos < 400)
	{
		row_left(grid, start_pos - 300, nbr, nbr_opposite);
	}
	else
	{
		row_right(grid, start_pos - 400, nbr, nbr_opposite);
	}
}

void	write1(int grid[4][4], char **input, int pos)
{
	int	count;
	int	temp_count;
	int	start_pos;

	count = 0;
	temp_count = 0;
	while (pos < 17)
	{
		if (input[pos][0] == '1')
		{
			while ((temp_count != 0 || input[pos][0] != '1') && pos < 18)
			{
				pos++;
				if (input[pos][0] == '1')
				{
					temp_count--;
				}
			}
			count++;
			temp_count = count;
			start_pos = get_start_pos(pos);
			peace(grid, start_pos, input[pos][0],
				input[get_opposit_nbr(pos)][0]);
		}
		pos++;
	}
}

void	write4(int grid[4][4], char **input, int pos)
{
	int	count;
	int	temp_count;
	int	start_pos;

	count = 0;
	temp_count = 0;
	while (pos < 17)
	{
		if (input[pos][0] == '4')
		{
			while ((temp_count != 0 || input[pos][0] != '4') && pos < 18)
			{
				pos++;
				if (input[pos][0] == '4')
				{
					temp_count--;
				}
			}
			count++;
			temp_count = count;
			start_pos = get_start_pos(pos);
			peace(grid, start_pos, input[pos][0],
				input[get_opposit_nbr(pos)][0]);
		}
		pos++;
	}
}
